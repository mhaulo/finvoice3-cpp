#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include <ctime>
#include <fstream>


#include "../lib/finvoice3.h"
#include "../lib/invoicerow.h"

TEST_CASE("Trivial initialize and build", "[integration]")
{
    Finvoice3 finvoice;
    finvoice.build();
    std::string output = finvoice.toString();

    xmlpp::DomParser parser;
    parser.set_throw_messages(true);
    parser.parse_memory(output);
}

TEST_CASE("Find subgtags", "[unit]")
{
    Finvoice3 finvoice;
    Tag *tag = nullptr;

    tag = finvoice.root()->findSubtag("MessageSenderDetails", true);
    REQUIRE(tag != nullptr);

    tag = finvoice.root()->findSubtag("MessageSenderDetails", false);
    REQUIRE(tag == nullptr);

    tag = finvoice.root()->findSubtag("MessageTransmissionDetails", false);
    REQUIRE(tag != nullptr);
}

TEST_CASE("Construct Finnish B2B invoice", "[integration]")
{
    Finvoice3 finvoice;
    Tag *root = finvoice.root();
    REQUIRE(root != nullptr);

    Tag *messageSenderDetails = root->findSubtag("MessageSenderDetails", true);
    REQUIRE(messageSenderDetails != nullptr);

    Tag *fromIdentifier = messageSenderDetails->findSubtag("FromIdentifier");
    REQUIRE(fromIdentifier != nullptr);
    fromIdentifier->setValue("00371234567890");
    fromIdentifier->setAttribute("SchemeID", "0037");
    Tag *fromIntermediator = messageSenderDetails->findSubtag("FromIntermediator");
    REQUIRE(fromIntermediator != nullptr);
    fromIntermediator->setValue("NDEAFIHH");

    Tag *messgeReceiverDetails = root->findSubtag("MessageReceiverDetails", true);
    Tag *toIdentifier = messgeReceiverDetails->findSubtag("ToIdentifier");
    REQUIRE(toIdentifier != nullptr);
    toIdentifier->setValue("00370987654321");
    toIdentifier->setAttribute("SchemeID", "0037");
    messgeReceiverDetails->findSubtag("ToIntermediator")->setValue("003710948874");

    Tag *messageDetails = root->findSubtag("MessageDetails", true);
    REQUIRE(messageDetails != nullptr);

    Tag *messageIdentifier = messageDetails->findSubtag("MessageIdentifier", true);
    REQUIRE(messageIdentifier != nullptr);
    messageIdentifier->setValue("123456");
    Tag *messageTimeStamp = messageDetails->findSubtag("MessageTimeStamp", true);
    REQUIRE(messageTimeStamp != nullptr);
    std::time_t time = std::time({});
    char timeString[std::size("yyyy-mm-ddThh:mm:ss")];
    std::strftime(std::data(timeString), std::size(timeString), "%FT%T", std::gmtime(&time));
    messageTimeStamp->setValue(timeString);
    Tag *specificationIdentifier = messageDetails->findSubtag("SpecificationIdentifier", true);
    specificationIdentifier->setValue("EN16931");

    Tag *sellerPartyDetails = root->findSubtag("SellerPartyDetails", true);
    REQUIRE(sellerPartyDetails != nullptr);
    Tag *sellerPartyIdentifer = sellerPartyDetails->findSubtag("SellerPartyIdentifier");
    REQUIRE(sellerPartyIdentifer != nullptr);
    sellerPartyIdentifer->setValue("6666666-5");
    Tag *sellerOrganisationName = sellerPartyDetails->findSubtag("SellerOrganisationName");
    REQUIRE(sellerOrganisationName != nullptr);
    sellerOrganisationName->setValue("Pullin Musiikki oy");
    Tag *sellerOrganisationTaxCode = sellerPartyDetails->findSubtag("SellerOrganisationTaxCode");
    REQUIRE(sellerOrganisationTaxCode != nullptr);
    sellerOrganisationTaxCode->setValue("FI66666665");
    Tag *sellerAccountId = root->findSubtag("SellerAccountID", true);
    REQUIRE(sellerAccountId != nullptr);
    sellerAccountId->setValue("FI2757800750155447");
    sellerAccountId->setAttribute("IdentificationSchemeName", "IBAN");
    Tag *sellerBic = root->findSubtag("SellerBic", true);
    REQUIRE(sellerBic != nullptr);
    sellerBic->setValue("OKOYFIHH");
    sellerBic->setAttribute("IdentificationSchemeName", "BIC");

    Tag *buyerPartyDetails = root->findSubtag("BuyerPartyDetails", true);
    REQUIRE(buyerPartyDetails != nullptr);
    Tag *buyerPartyIdentifer = buyerPartyDetails->findSubtag("BuyerPartyIdentifier");
    REQUIRE(buyerPartyIdentifer != nullptr);
    buyerPartyIdentifer->setValue("1234567-1");
    Tag *buyerOrganisationName = buyerPartyDetails->findSubtag("BuyerOrganisationName");
    REQUIRE(buyerOrganisationName != nullptr);
    buyerOrganisationName->setValue("Sensorit Oy");
    Tag *buyerOrganisationTaxCode = buyerPartyDetails->findSubtag("BuyerOrganisationTaxCode");
    REQUIRE(buyerOrganisationTaxCode != nullptr);
    buyerOrganisationTaxCode->setValue("FI12345671");

    Tag *invoiceDetails = root->findSubtag("InvoiceDetails", true);
    REQUIRE(invoiceDetails != nullptr);
    invoiceDetails->findSubtag("InvoiceTypeCode")->setValue("INV01");
    invoiceDetails->findSubtag("InvoiceTypeText")->setValue("Invoice");
    invoiceDetails->findSubtag("OriginCode", true)->setValue("Original");
    invoiceDetails->findSubtag("InvoiceNumber")->setValue("123456");
    Tag *invoiceDate = invoiceDetails->findSubtag("InvoiceDate");
    REQUIRE(invoiceDate != nullptr);
    invoiceDate->setAttribute("Format", "CCYYMMDD");
    invoiceDate->setValue("20181203");

    Tag *rowsTotalVatExcludedAmount = invoiceDetails->findSubtag("RowsTotalVatExcludedAmount");
    REQUIRE(rowsTotalVatExcludedAmount != nullptr);
    rowsTotalVatExcludedAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    rowsTotalVatExcludedAmount->setValue("100,00");
    Tag *invoiceTotalVatExcludedAmount = invoiceDetails->findSubtag("InvoiceTotalVatExcludedAmount");
    REQUIRE(invoiceTotalVatExcludedAmount != nullptr);
    invoiceTotalVatExcludedAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    invoiceTotalVatExcludedAmount->setValue("100,00");
    Tag *invoiceTotalVatAmount = invoiceDetails->findSubtag("InvoiceTotalVatAmount");
    REQUIRE(invoiceTotalVatAmount != nullptr);
    invoiceTotalVatAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    invoiceTotalVatAmount->setValue("24,00");
    Tag *invoiceTotalVatIncludedAmount = invoiceDetails->findSubtag("InvoiceTotalVatIncludedAmount");
    REQUIRE(invoiceTotalVatIncludedAmount != nullptr);
    invoiceTotalVatIncludedAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    invoiceTotalVatIncludedAmount->setValue("124,00");

    Tag *vatSpecificationDetails = root->findSubtag("VatSpecificationDetails", true);
    REQUIRE(vatSpecificationDetails != nullptr);
    Tag *vatBaseAmount = vatSpecificationDetails->findSubtag("VatBaseAmount");
    REQUIRE(vatBaseAmount != nullptr);
    vatBaseAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    vatBaseAmount->setValue("100,00");
    vatSpecificationDetails->findSubtag("VatRatePercent")->setValue("24,00");
    vatSpecificationDetails->findSubtag("VatCode")->setValue("S");
    Tag *vatRateAmount = vatSpecificationDetails->findSubtag("VatRateAmount");
    REQUIRE(vatRateAmount != nullptr);
    vatRateAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    vatRateAmount->setValue("24,00");

    Tag *paymentTermsDetails = root->findSubtag("PaymentTermsDetails", true);
    REQUIRE(paymentTermsDetails != nullptr);
    paymentTermsDetails->findSubtag("PaymentTermsFreeText")->setValue("14 päivää netto");
    Tag *invoiceDueDate = paymentTermsDetails->findSubtag("InvoiceDueDate");
    REQUIRE(invoiceDueDate != nullptr);
    invoiceDate->setAttribute("Format", "CCYYMMDD");
    invoiceDate->setValue("20181217");

    Tag *epiDetails = root->findSubtag("EpiDetails", true);
    REQUIRE(epiDetails != nullptr);
    Tag *epiDate = epiDetails->findSubtag("EpiDate", true);
    REQUIRE(epiDate != nullptr);
    epiDate->setAttribute("Format", "CCYYMMDD");
    epiDate->setValue("20160208");
    Tag *epiBfiIdentifier = epiDetails->findSubtag("EpiBfiIdentifier", true);
    REQUIRE(epiBfiIdentifier != nullptr);
    epiBfiIdentifier->setAttribute("IdentificationSchemeName", "BIC");
    epiBfiIdentifier->setValue("NDEAFIHH");
    epiDetails->findSubtag("EpiNameAddressDetails", true)->setValue("Pullin Musiikki Oy");
    Tag *epiAccountId = epiDetails->findSubtag("EpiAccountID", true);
    REQUIRE(epiAccountId != nullptr);
    epiAccountId->setAttribute("IdentificationSchemeName", "IBAN");
    epiAccountId->setValue("FI7429501800000014");

    Tag *epiPaymentInstructionDetails = root->findSubtag("EpiPaymentInstructionDetails", true);
    REQUIRE(epiPaymentInstructionDetails != nullptr);
    epiPaymentInstructionDetails->findSubtag("EpiPaymentInstructionId")->setValue("123456789");
    Tag *epiRemittanceInfoIdentifier = epiPaymentInstructionDetails->findSubtag("EpiRemittanceInfoIdentifier");
    REQUIRE(epiRemittanceInfoIdentifier != nullptr);
    epiRemittanceInfoIdentifier->setAttribute("IdentificationSchemeName", "ISO");
    epiRemittanceInfoIdentifier->setValue("RF911234567890120");
    Tag *epiInstructedAmount = epiPaymentInstructionDetails->findSubtag("EpiInstructedAmount");
    REQUIRE(epiInstructedAmount != nullptr);
    epiInstructedAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    epiInstructedAmount->setValue("124,00");
    epiPaymentInstructionDetails->findSubtag("EpiCharge")->setAttribute("ChargeOption", "SLEV");
    Tag *epiDateOptionDate = epiPaymentInstructionDetails->findSubtag("EpiDateOptionDate");
    REQUIRE(epiDateOptionDate != nullptr);
    epiDateOptionDate->setAttribute("Format", "CCYYMMDD");
    epiDateOptionDate->setValue("20181217");
    epiPaymentInstructionDetails->findSubtag("EpiPaymentMeansCode")->setValue("58");

    Tag *invoiceRow = new InvoiceRow;
    invoiceRow->findSubtag("ArticleIdentifier")->setValue("12345");
    invoiceRow->findSubtag("ArticleName")->setValue("Sisustustaulu");
    Tag *deliveredQuantity = invoiceRow->findSubtag("DeliveredQuantity");
    REQUIRE(deliveredQuantity != nullptr);
    deliveredQuantity->setAttribute("QuantityUnitCode", "kpl");
    deliveredQuantity->setAttribute("QuantityUnitCodeUN", "C62");
    deliveredQuantity->setValue("2");
    Tag *invoicedQuantity = invoiceRow->findSubtag("InvoicedQuantity");
    REQUIRE(invoicedQuantity != nullptr);
    invoicedQuantity->setAttribute("QuantityUnitCode", "kpl");
    invoicedQuantity->setAttribute("QuantityUnitCodeUN", "C62");
    invoicedQuantity->setValue("2");
    Tag *unitPriceAmount = invoiceRow->findSubtag("UnitPriceAmount");
    REQUIRE(unitPriceAmount != nullptr);
    unitPriceAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    unitPriceAmount->setValue("50,00");
    Tag *unitPriceNetAmount = invoiceRow->findSubtag("UnitPriceNetAmount");
    REQUIRE(unitPriceNetAmount != nullptr);
    unitPriceNetAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    unitPriceNetAmount->setValue("50,00");
    invoiceRow->findSubtag("RowPositionIdentifier")->setValue("1");
    invoiceRow->findSubtag("RowVatRatePercent")->setValue("24,00");
    invoiceRow->findSubtag("RowVatCode")->setValue("S");
    Tag *rowVatAmount = invoiceRow->findSubtag("RowVatAmount");
    REQUIRE(rowVatAmount != nullptr);
    rowVatAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    rowVatAmount->setValue("24,00");
    Tag *rowVatExcludedAmount = invoiceRow->findSubtag("RowVatExcludedAmount");
    REQUIRE(rowVatExcludedAmount != nullptr);
    rowVatExcludedAmount->setAttribute("AmountCurrencyIdentifier", "EUR");
    rowVatExcludedAmount->setValue("100,00");

    root->addSubtag(invoiceRow);

    finvoice.build();
    bool valid = finvoice.validate("../../../test/Finvoice3.0.xsd");
    REQUIRE(valid);

    std::string output = finvoice.toString();
    //std::cout << output << std::endl;

    std::ofstream out("/tmp/testi.xml", std::ios::trunc);
    out << output;
    out.close();

    xmlpp::DomParser parser;
    parser.set_throw_messages(true);
    parser.parse_memory(output);
}
