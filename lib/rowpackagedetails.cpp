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

#include "rowpackagedetails.h"

#include "simpletag.h"

RowPackageDetails::RowPackageDetails() : ComplexTag("RowPackageDetails", 28)
{
    addSubtag(new SimpleTag("RowPackageLength", 0));
    addSubtag(new SimpleTag("RowPackageWidth", 1));
    addSubtag(new SimpleTag("RowPackageHeight", 2));
    addSubtag(new SimpleTag("RowPackageWeight", 3));
    addSubtag(new SimpleTag("RowPackageNetWeight", 4));
    addSubtag(new SimpleTag("RowPackageVolume", 5));
    addSubtag(new SimpleTag("RowTransportCarriageQuantity", 6));
}
