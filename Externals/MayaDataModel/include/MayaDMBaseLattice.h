/*
    Copyright (c) 2008-2009 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_BASELATTICE_H__
#define __MayaDM_BASELATTICE_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMShape.h"
namespace MayaDM
{
class BaseLattice : public Shape
{
public:
	BaseLattice():Shape(){}
	BaseLattice(FILE* file,const std::string& name,const std::string& parent="",bool create=true)
		:Shape(file, name, parent, "baseLattice", create){}
	virtual ~BaseLattice(){}
protected:
	BaseLattice(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType,bool create=true)
		:Shape(file, name, parent, nodeType, create) {}

};
}//namespace MayaDM
#endif//__MayaDM_BASELATTICE_H__
