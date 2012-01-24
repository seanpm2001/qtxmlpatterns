/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the QtXmlPatterns module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.

#include "qxsdsimpletype_p.h"

QT_BEGIN_NAMESPACE

using namespace QPatternist;

QString XsdSimpleType::displayName(const NamePool::Ptr &np) const
{
    return np->displayName(name(np));
}

void XsdSimpleType::setWxsSuperType(const SchemaType::Ptr &type)
{
    m_superType = type;
}

SchemaType::Ptr XsdSimpleType::wxsSuperType() const
{
    return m_superType;
}

void XsdSimpleType::setContext(const NamedSchemaComponent::Ptr &component)
{
    m_context = component;
}

NamedSchemaComponent::Ptr XsdSimpleType::context() const
{
    return m_context;
}

void XsdSimpleType::setPrimitiveType(const AnySimpleType::Ptr &type)
{
    m_primitiveType = type;
}

AnySimpleType::Ptr XsdSimpleType::primitiveType() const
{
    return m_primitiveType;
}

void XsdSimpleType::setItemType(const AnySimpleType::Ptr &type)
{
    m_itemType = type;
}

AnySimpleType::Ptr XsdSimpleType::itemType() const
{
    return m_itemType;
}

void XsdSimpleType::setMemberTypes(const AnySimpleType::List &types)
{
    m_memberTypes = types;
}

AnySimpleType::List XsdSimpleType::memberTypes() const
{
    return m_memberTypes;
}

void XsdSimpleType::setFacets(const XsdFacet::Hash &facets)
{
    m_facets = facets;
}

XsdFacet::Hash XsdSimpleType::facets() const
{
    return m_facets;
}

void XsdSimpleType::setCategory(TypeCategory category)
{
    m_typeCategory = category;
}

XsdSimpleType::TypeCategory XsdSimpleType::category() const
{
    return m_typeCategory;
}

void XsdSimpleType::setDerivationMethod(DerivationMethod method)
{
    m_derivationMethod = method;
}

XsdSimpleType::DerivationMethod XsdSimpleType::derivationMethod() const
{
    return m_derivationMethod;
}

bool XsdSimpleType::isDefinedBySchema() const
{
    return true;
}

QT_END_NAMESPACE
