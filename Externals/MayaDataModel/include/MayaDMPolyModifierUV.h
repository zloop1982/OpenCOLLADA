/*
    Copyright (c) 2008-2009 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_POLYMODIFIERUV_H__
#define __MayaDM_POLYMODIFIERUV_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMPolyModifierWorld.h"
namespace MayaDM
{
class PolyModifierUV : public PolyModifierWorld
{
public:
public:
	PolyModifierUV():PolyModifierWorld(){}
	PolyModifierUV(FILE* file,const std::string& name,const std::string& parent="",bool create=true)
		:PolyModifierWorld(file, name, parent, "polyModifierUV", create){}
	virtual ~PolyModifierUV(){}
	void setUvSetName(const string& uvs)
	{
		if(uvs == "NULL") return;
		fprintf(mFile,"\tsetAttr \".uvs\" -type \"string\" ");
		uvs.write(mFile);
		fprintf(mFile,";\n");

	}
	void getUvSetName()const
	{
		fprintf(mFile,"\"%s.uvs\"",mName.c_str());

	}
protected:
	PolyModifierUV(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType,bool create=true)
		:PolyModifierWorld(file, name, parent, nodeType, create) {}

};
}//namespace MayaDM
#endif//__MayaDM_POLYMODIFIERUV_H__
