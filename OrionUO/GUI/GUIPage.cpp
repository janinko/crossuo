﻿// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
/***********************************************************************************
**
** GUIPage.cpp
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#include "stdafx.h"

CGUIPage::CGUIPage(int index)
    : CBaseGUI(GOT_PAGE, 0, 0, 0, 0, 0)
    , Index(index)
{
}

CGUIPage::~CGUIPage()
{
}

