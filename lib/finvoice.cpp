#include "finvoice.h"

#include "simpletag.h"
#include "messagetransmissiondetails.h"
#include "sellerpartydetails.h"
#include "sellercommunicationdetails.h"
#include "sellerinformationdetails.h"
#include "invoicesenderpartydetails.h"
#include "invoicerecipientpartydetails.h"
#include "invoicerecipientcommunicationdetails.h"
#include "buyerpartydetails.h"
#include "buyercommunicationdetails.h"
#include "deliverypartydetails.h"
#include "deliverycommunicationdetails.h"
#include "deliverydetails.h"
#include "anypartydetails.h"
#include "invoicedetails.h"
#include "paymentcardinfo.h"
#include "directdebitinfo.h"
#include "paymentstatusdetails.h"
#include "partialpaymentdetails.h"
#include "factoringagreementdetails.h"
#include "specificationdetails.h"
#include "epidetails.h"
#include "attachmentmessagedetails.h"

Finvoice::Finvoice() : ComplexTag("Finvoice", 0)
{
    setAttribute("Version", "3.0");
    setAttribute("xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance");
    setAttribute("xsi:noNamespaceSchemaLocation", "Finvoice3.0.xsd");

    addSubtag(new MessageTransmissionDetails);
    addSubtag(new SellerPartyDetails);
    addSubtag(new SimpleTag("SellerOrganisationNumber", 2));
    addSubtag(new SimpleTag("SellerSiteCode", 3));
    addSubtag(new SimpleTag("SellerContactPersonName", 4));
    addSubtag(new SimpleTag("SellerContactPersonFunction", 5));
    addSubtag(new SimpleTag("SellerContactPersonDepartment", 6));
    addSubtag(new SellerCommunicationDetails);
    addSubtag(new SellerInformationDetails);
    addSubtag(new InvoiceSenderPartyDetails);
    addSubtag(new InvoiceRecipientPartyDetails);
    addSubtag(new SimpleTag("InvoiceRecipientOrganisationUnitNumber", 11));
    addSubtag(new SimpleTag("InvoiceRecipientSiteCode", 12));
    addSubtag(new SimpleTag("InvoiceRecipientContactPersonName", 13));
    addSubtag(new SimpleTag("InvoiceRecipientContactPersonFunction", 14));
    addSubtag(new SimpleTag("InvoiceRecipientContactPersonDepartment", 15));
    addSubtag(new SimpleTag("InvoiceRecipientLanguageCode", 16));
    addSubtag(new InvoiceRecipientCommunicationDetails);
    addSubtag(new BuyerPartyDetails);
    addSubtag(new SimpleTag("BuyerOrganisationUnitNumber", 19));
    addSubtag(new SimpleTag("BuyerSiteCode", 20));
    addSubtag(new SimpleTag("BuyerContactPersonName", 21));
    addSubtag(new SimpleTag("BuyerContactPersonFunction", 22));
    addSubtag(new SimpleTag("BuyerContactPersonDepartment", 23));
    addSubtag(new BuyerCommunicationDetails);
    addSubtag(new DeliveryPartyDetails);
    addSubtag(new SimpleTag("DeliveryOrganisationUnitNumber", 26));
    addSubtag(new SimpleTag("DeliverySiteCode", 27));
    addSubtag(new SimpleTag("DeliveryContactPersonName", 28));
    addSubtag(new SimpleTag("DeliveryContactPersonFunction", 29));
    addSubtag(new SimpleTag("DeliveryContactPersonDepartment", 30));
    addSubtag(new DeliveryCommunicationDetails);
    addSubtag(new DeliveryDetails);
    addSubtag(new AnyPartyDetails);
    addSubtag(new InvoiceDetails);
    addSubtag(new PaymentCardInfo);
    addSubtag(new DirectDebitInfo);
    addSubtag(new PaymentStatusDetails);
    addSubtag(new PartialPaymentDetails);
    addSubtag(new FactoringAgreementDetails);
    addSubtag(new SimpleTag("VirtualBankBarcode", 40));
    // TODO invoice rows
    addSubtag(new SpecificationDetails);
    addSubtag(new EpiDetails);
    addSubtag(new SimpleTag("InvoiceUrlNameText", 102));
    addSubtag(new SimpleTag("InvoiceUrlText", 103));
    addSubtag(new SimpleTag("StorageUrlText", 104));
    addSubtag(new SimpleTag("LayOutIdentifier", 105));
    addSubtag(new SimpleTag("InvoiceSegmentIdentifier", 106));
    addSubtag(new SimpleTag("ControlChecksum", 107));
    addSubtag(new SimpleTag("MessageChecksum", 108));
    addSubtag(new SimpleTag("ControlStampText", 109));
    addSubtag(new SimpleTag("AcceptanceStampText", 110));
    addSubtag(new SimpleTag("OriginalInvoiceFormat", 111));
    addSubtag(new AttachmentMessageDetails);
}

std::multiset<Tag*> Finvoice::getSubtags() const
{
    return subtags;
}
