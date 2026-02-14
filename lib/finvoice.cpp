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

Finvoice::Finvoice() : ComplexTag("Finvoice")
{
    setAttribute("Version", "3.0");
    setAttribute("xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance");
    setAttribute("xsi:noNamespaceSchemaLocation", "Finvoice3.0.xsd");

    addSubtag(new MessageTransmissionDetails);
    addSubtag(new SellerPartyDetails);
    addSubtag(new SellerCommunicationDetails);
    addSubtag(new InvoiceSenderPartyDetails);
    addSubtag(new InvoiceRecipientPartyDetails);
    addSubtag(new InvoiceRecipientCommunicationDetails);
    addSubtag(new BuyerPartyDetails);
    addSubtag(new BuyerCommunicationDetails);
    addSubtag(new DeliveryPartyDetails);
    addSubtag(new DeliveryCommunicationDetails);
    addSubtag(new DeliveryDetails);
    addSubtag(new AnyPartyDetails);
    addSubtag(new InvoiceDetails);
    addSubtag(new PaymentCardInfo);
    addSubtag(new DirectDebitInfo);
    addSubtag(new PaymentStatusDetails);
    addSubtag(new PartialPaymentDetails);
    addSubtag(new FactoringAgreementDetails);
    addSubtag(new SpecificationDetails);
    addSubtag(new EpiDetails);
    addSubtag(new AttachmentMessageDetails);
    addSubtag(new SimpleTag("SellerOrganisationNumber"));
    addSubtag(new SimpleTag("SellerSiteCode"));
    addSubtag(new SimpleTag("SellerContactPersonName"));
    addSubtag(new SimpleTag("SellerContactPersonFunction"));
    addSubtag(new SimpleTag("SellerContactPersonDepartment"));
    addSubtag(new SimpleTag("InvoiceRecipientOrganisationUnitNumber"));
    addSubtag(new SimpleTag("InvoiceRecipientSiteCode"));
    addSubtag(new SimpleTag("InvoiceRecipientContactPersonName"));
    addSubtag(new SimpleTag("InvoiceRecipientContactPersonDepartment"));
    addSubtag(new SimpleTag("InvoiceRecipientLanguageCode"));
    addSubtag(new SimpleTag("BuyerOrganisationUnitNumber"));
    addSubtag(new SimpleTag("BuyerSiteCode"));
    addSubtag(new SimpleTag("BuyerContactPersonName"));
    addSubtag(new SimpleTag("BuyerContactPersonFunction"));
    addSubtag(new SimpleTag("BuyerContactPersonDepartment"));
    addSubtag(new SimpleTag("DeliveryOrganisationUnitNumber"));
    addSubtag(new SimpleTag("DeliverySiteCode"));
    addSubtag(new SimpleTag("DeliveryContactPersonName"));
    addSubtag(new SimpleTag("DeliveryContactPersonFunction"));
    addSubtag(new SimpleTag("DeliveryContactPersonDepartment"));
    addSubtag(new SimpleTag("VirtualBankBarcode"));
    addSubtag(new SimpleTag("InvoiceUrlName"));
    addSubtag(new SimpleTag("InvoiceUrlText"));
    addSubtag(new SimpleTag("StorageUrlText"));
    addSubtag(new SimpleTag("LayOutIdentifier"));
    addSubtag(new SimpleTag("InvoiceSegmentIdentifier"));
    addSubtag(new SimpleTag("ControlChecksum"));
    addSubtag(new SimpleTag("MessageChecksum"));
    addSubtag(new SimpleTag("ControlStampText"));
    addSubtag(new SimpleTag("AcceptanceStampText"));
    addSubtag(new SimpleTag("OriginalInvoiceFormat"));

    // TODO invoice rows
}

std::vector<Tag*> Finvoice::getSubtags() const
{
    return subtags;
}
