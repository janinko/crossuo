﻿// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
/***********************************************************************************
**
** GUIGroup.cpp
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#include "stdafx.h"

CGUIGroup::CGUIGroup(int index)
    : CBaseGUI(GOT_GROUP, 0, 0, 0, 0, 0)
    , Index(index)
{
}

CGUIGroup::~CGUIGroup()
{
}

