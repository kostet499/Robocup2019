/*
 * This file has been generated by the onto2vocabularyclass tool
 * copyright (C) 2007-2008 Sebastian Trueg <trueg@kde.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "rdfs.h"
#include <QThreadStorage>

class RdfsPrivate
{
public:
    RdfsPrivate()
        : rdfs_namespace( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#", QUrl::StrictMode ) ),
          rdfs_Class( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#Class", QUrl::StrictMode ) ),
          rdfs_Container( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#Container", QUrl::StrictMode ) ),
          rdfs_ContainerMembershipProperty( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#ContainerMembershipProperty", QUrl::StrictMode ) ),
          rdfs_Datatype( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#Datatype", QUrl::StrictMode ) ),
          rdfs_Literal( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#Literal", QUrl::StrictMode ) ),
          rdfs_Resource( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#Resource", QUrl::StrictMode ) ),
          rdfs_comment( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#comment", QUrl::StrictMode ) ),
          rdfs_domain( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#domain", QUrl::StrictMode ) ),
          rdfs_isDefinedBy( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#isDefinedBy", QUrl::StrictMode ) ),
          rdfs_label( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#label", QUrl::StrictMode ) ),
          rdfs_member( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#member", QUrl::StrictMode ) ),
          rdfs_range( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#range", QUrl::StrictMode ) ),
          rdfs_seeAlso( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#seeAlso", QUrl::StrictMode ) ),
          rdfs_subClassOf( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#subClassOf", QUrl::StrictMode ) ),
          rdfs_subPropertyOf( QUrl::fromEncoded( "http://www.w3.org/2000/01/rdf-schema#subPropertyOf", QUrl::StrictMode ) ) {
    }

    QUrl rdfs_namespace;
    QUrl rdfs_Class;
    QUrl rdfs_Container;
    QUrl rdfs_ContainerMembershipProperty;
    QUrl rdfs_Datatype;
    QUrl rdfs_Literal;
    QUrl rdfs_Resource;
    QUrl rdfs_comment;
    QUrl rdfs_domain;
    QUrl rdfs_isDefinedBy;
    QUrl rdfs_label;
    QUrl rdfs_member;
    QUrl rdfs_range;
    QUrl rdfs_seeAlso;
    QUrl rdfs_subClassOf;
    QUrl rdfs_subPropertyOf;
};

QThreadStorage<RdfsPrivate*> qts_rdfs;
RdfsPrivate* s_rdfs() {
    if( !qts_rdfs.hasLocalData() )
        qts_rdfs.setLocalData( new RdfsPrivate );
    return qts_rdfs.localData();
}

QUrl Soprano::Vocabulary::RDFS::rdfsNamespace()
{
    return s_rdfs()->rdfs_namespace;
}

QUrl Soprano::Vocabulary::RDFS::Class()
{
    return s_rdfs()->rdfs_Class;
}

QUrl Soprano::Vocabulary::RDFS::Container()
{
    return s_rdfs()->rdfs_Container;
}

QUrl Soprano::Vocabulary::RDFS::ContainerMembershipProperty()
{
    return s_rdfs()->rdfs_ContainerMembershipProperty;
}

QUrl Soprano::Vocabulary::RDFS::Datatype()
{
    return s_rdfs()->rdfs_Datatype;
}

QUrl Soprano::Vocabulary::RDFS::Literal()
{
    return s_rdfs()->rdfs_Literal;
}

QUrl Soprano::Vocabulary::RDFS::Resource()
{
    return s_rdfs()->rdfs_Resource;
}

QUrl Soprano::Vocabulary::RDFS::comment()
{
    return s_rdfs()->rdfs_comment;
}

QUrl Soprano::Vocabulary::RDFS::domain()
{
    return s_rdfs()->rdfs_domain;
}

QUrl Soprano::Vocabulary::RDFS::isDefinedBy()
{
    return s_rdfs()->rdfs_isDefinedBy;
}

QUrl Soprano::Vocabulary::RDFS::label()
{
    return s_rdfs()->rdfs_label;
}

QUrl Soprano::Vocabulary::RDFS::member()
{
    return s_rdfs()->rdfs_member;
}

QUrl Soprano::Vocabulary::RDFS::range()
{
    return s_rdfs()->rdfs_range;
}

QUrl Soprano::Vocabulary::RDFS::seeAlso()
{
    return s_rdfs()->rdfs_seeAlso;
}

QUrl Soprano::Vocabulary::RDFS::subClassOf()
{
    return s_rdfs()->rdfs_subClassOf;
}

QUrl Soprano::Vocabulary::RDFS::subPropertyOf()
{
    return s_rdfs()->rdfs_subPropertyOf;
}