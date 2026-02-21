/***************************************************************************
 *   C++ Finvoice 3.0 library                                              *
 *   Copyright (C) 2026 Mika Haulo (mika@haulo.fi)                         *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, see                          *
 *   <https://www.gnu.org/licenses/>.                                      *
 ***************************************************************************/

#include "subrowdeliverydetails.h"

#include "simpletag.h"
#include "countrycode.h"
#include "customsinfo.h"
#include "subrowpackagedetails.h"

SubRowDeliveryDetails::SubRowDeliveryDetails() : ComplexTag("SubRowDeliveryDetails", 54)
{
    addSubtag(new SimpleTag("SubRowTerminalAddressText", 0));
    addSubtag(new SimpleTag("SubRowWaybillIdentifier", 1));
    addSubtag(new SimpleTag("SubRowWaybillTypeCode", 2));
    addSubtag(new SimpleTag("SubRowClearanceIdentifier", 3));
    addSubtag(new SimpleTag("SubRowDeliveryNoteIdentifier", 4));
    addSubtag(new SimpleTag("SubRowDelivererName", 5));
    addSubtag(new SimpleTag("SubRowDelivererCountrySubdivision", 6));
    addSubtag(new CountryCode("SubRowDelivererCountryCode", 7));
    addSubtag(new SimpleTag("SubRowDelivererCountryName", 8));
    addSubtag(new SimpleTag("SubRowPlaceOfDischarge", 9));
    addSubtag(new SimpleTag("SubRowFinalDestinationName", 10));
    addSubtag(new CustomsInfo("SubRowCustomsInfo", 11));
    addSubtag(new SimpleTag("SubRowManufacturerArticleIdentifier", 12));
    addSubtag(new SimpleTag("SubRowManufacturerIdentifier", 13));
    addSubtag(new SimpleTag("SubRowManufacturerName", 14));
    addSubtag(new SimpleTag("SubRowManufacturerCountrySubdivision", 15));
    addSubtag(new CountryCode("SubRowManufacturerCountryCode", 16));
    addSubtag(new SimpleTag("SubRowManufacturerCountryName", 17));
    addSubtag(new SimpleTag("SubRowManufacturerOrderIdentifier", 18));
    addSubtag(new SubRowPackageDetails);
}
