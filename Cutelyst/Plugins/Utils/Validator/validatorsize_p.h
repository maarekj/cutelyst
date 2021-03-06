/*
 * Copyright (C) 2017 Matthias Fehring <kontakt@buschmann23.de>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB. If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */
#ifndef CUTELYSTVALIDATORSIZE_P_H
#define CUTELYSTVALIDATORSIZE_P_H

#include "validatorsize.h"
#include "validatorrule_p.h"

namespace Cutelyst {
    
class ValidatorSizePrivate : public ValidatorRulePrivate
{
public:
    ValidatorSizePrivate(const QString &f, QMetaType::Type t, double s, const QString &l, const QString &e) :
        ValidatorRulePrivate(f, l, e),
        type(t),
        size(s)
    {}

    QMetaType::Type type;
    double size;
};
    
}

#endif //CUTELYSTVALIDATORSIZE_P_H

