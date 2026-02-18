CONFIG -= qt

TEMPLATE = lib
DEFINES += FINVOICE3_LIBRARY
TARGET = finvoice3

CONFIG += c++17
CONFIG += static

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    anypartycommunicationdetails.cpp \
    anypartydetails.cpp \
    anypartypostaladdressdetails.cpp \
    articlegroupidentifier.cpp \
    attachmentmessagedetails.cpp \
    attachmentmessageidentifier.cpp \
    buyercommunicationdetails.cpp \
    buyerpartydetails.cpp \
    buyerpostaladdressdetails.cpp \
    cashdiscountvatdetails.cpp \
    complextag.cpp \
    countrycode.cpp \
    customsinfo.cpp \
    definitiondetails.cpp \
    definitionheadertext.cpp \
    deliverycommunicationdetails.cpp \
    deliverydetails.cpp \
    deliverypartydetails.cpp \
    deliveryperioddetails.cpp \
    deliverypostaladdressdetails.cpp \
    destinationname.cpp \
    directdebitinfo.cpp \
    discountdetails.cpp \
    eancode.cpp \
    electronicaddrid.cpp \
    epiaccountid.cpp \
    epiamount.cpp \
    epibeneficiarypartydetails.cpp \
    epibfiidentifier.cpp \
    epibfipartydetails.cpp \
    epicharge.cpp \
    epidetails.cpp \
    epiidentificationdetails.cpp \
    epipartydetails.cpp \
    epipaymentinstructiondetails.cpp \
    epireference.cpp \
    epiremittanceinfoidentifier.cpp \
    externalspecificationdetails.cpp \
    factoringagreementdetails.cpp \
    factoringpartypostaladdressdetails.cpp \
    finvoice.cpp \
    finvoice3.cpp \
    headervalue.cpp \
    invoice.cpp \
    invoicechargedetails.cpp \
    invoiceclassification.cpp \
    invoicedetails.cpp \
    invoicedobjectid.cpp \
    invoicerecipientcommunicationdetails.cpp \
    invoicerecipientdetails.cpp \
    invoicerecipientpartydetails.cpp \
    invoicerecipientpostaladdressdetails.cpp \
    invoicerow.cpp \
    invoicesenderpartydetails.cpp \
    invoicetypecodefi.cpp \
    messagedetails.cpp \
    messagereceiverdetails.cpp \
    messagesenderdetails.cpp \
    messagetransmissiondetails.cpp \
    originalinvoicereference.cpp \
    origincode.cpp \
    packagedetails.cpp \
    partialpaymentdetails.cpp \
    partyidentifier.cpp \
    partylegalregid.cpp \
    paymentcardinfo.cpp \
    paymentoverduefinedetails.cpp \
    paymentstatuscode.cpp \
    paymentstatusdetails.cpp \
    paymenttermsdetails.cpp \
    rowanypartydetails.cpp \
    rowanypartypostaladdressdetails.cpp \
    rowchargedetails.cpp \
    rowdefinitiondetails.cpp \
    rowdefinitionheadertext.cpp \
    rowdeliverydetails.cpp \
    rowoverduepaymentdetails.cpp \
    rowpackagedetails.cpp \
    rowprogressivediscountdetails.cpp \
    selleraccountdetails.cpp \
    selleraccountid.cpp \
    sellerbic.cpp \
    sellercommunicationdetails.cpp \
    sellerinformationdetails.cpp \
    sellerofficialpostaladdressdetails.cpp \
    sellerpartydetails.cpp \
    sellerpostaladdressdetails.cpp \
    shipmentpartydetails.cpp \
    shipmentpostaladdressdetails.cpp \
    simpletag.cpp \
    specificationdetails.cpp \
    subinvoicerow.cpp \
    subrowanypartydetails.cpp \
    subrowanypartypostaladdressdetails.cpp \
    subrowdefinitiondetails.cpp \
    subrowdefinitionheadertext.cpp \
    subrowdeliverydetails.cpp \
    subrowoverduepaymentdetails.cpp \
    subrowpackagedetails.cpp \
    subrowprogressivediscountdetails.cpp \
    tag.cpp \
    transactiondetails.cpp \
    vatcategorycode.cpp \
    vatpoint.cpp \
    vatspecificationdetails.cpp

HEADERS += \
    anypartycommunicationdetails.h \
    anypartydetails.h \
    anypartypostaladdressdetails.h \
    articlegroupidentifier.h \
    attachmentmessagedetails.h \
    attachmentmessageidentifier.h \
    buyercommunicationdetails.h \
    buyerpartydetails.h \
    buyerpostaladdressdetails.h \
    cashdiscountvatdetails.h \
    complextag.h \
    countrycode.h \
    customsinfo.h \
    definitiondetails.h \
    definitionheadertext.h \
    deliverycommunicationdetails.h \
    deliverydetails.h \
    deliverypartydetails.h \
    deliveryperioddetails.h \
    deliverypostaladdressdetails.h \
    destinationname.h \
    directdebitinfo.h \
    discountdetails.h \
    eancode.h \
    electronicaddrid.h \
    epiaccountid.h \
    epiamount.h \
    epibeneficiarypartydetails.h \
    epibfiidentifier.h \
    epibfipartydetails.h \
    epicharge.h \
    epidetails.h \
    epiidentificationdetails.h \
    epipartydetails.h \
    epipaymentinstructiondetails.h \
    epireference.h \
    epiremittanceinfoidentifier.h \
    externalspecificationdetails.h \
    factoringagreementdetails.h \
    factoringpartypostaladdressdetails.h \
    finvoice.h \
    headervalue.h \
    invoice.h \
    invoicechargedetails.h \
    invoiceclassification.h \
    invoicedetails.h \
    invoicedobjectid.h \
    invoicerecipientcommunicationdetails.h \
    invoicerecipientdetails.h \
    invoicerecipientpartydetails.h \
    invoicerecipientpostaladdressdetails.h \
    invoicerow.h \
    invoicesenderpartydetails.h \
    invoicetypecodefi.h \
    lib_global.h \
    finvoice3.h \
    messagedetails.h \
    messagereceiverdetails.h \
    messagesenderdetails.h \
    messagetransmissiondetails.h \
    originalinvoicereference.h \
    origincode.h \
    packagedetails.h \
    partialpaymentdetails.h \
    partyidentifier.h \
    partylegalregid.h \
    paymentcardinfo.h \
    paymentoverduefinedetails.h \
    paymentstatuscode.h \
    paymentstatusdetails.h \
    paymenttermsdetails.h \
    rowanypartydetails.h \
    rowanypartypostaladdressdetails.h \
    rowchargedetails.h \
    rowdefinitiondetails.h \
    rowdefinitionheadertext.h \
    rowdeliverydetails.h \
    rowoverduepaymentdetails.h \
    rowpackagedetails.h \
    rowprogressivediscountdetails.h \
    selleraccountdetails.h \
    selleraccountid.h \
    sellerbic.h \
    sellercommunicationdetails.h \
    sellerinformationdetails.h \
    sellerofficialpostaladdressdetails.h \
    sellerpartydetails.h \
    sellerpostaladdressdetails.h \
    shipmentpartydetails.h \
    shipmentpostaladdressdetails.h \
    simpletag.h \
    specificationdetails.h \
    subinvoicerow.h \
    subrowanypartydetails.h \
    subrowanypartypostaladdressdetails.h \
    subrowdefinitiondetails.h \
    subrowdefinitionheadertext.h \
    subrowdeliverydetails.h \
    subrowoverduepaymentdetails.h \
    subrowpackagedetails.h \
    subrowprogressivediscountdetails.h \
    tag.h \
    transactiondetails.h \
    util.h \
    vatcategorycode.h \
    vatpoint.h \
    vatspecificationdetails.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += libxml++-2.6
