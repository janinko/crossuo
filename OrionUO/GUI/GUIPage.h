﻿/***********************************************************************************
**
** GUIPage.h
**
** Компонента страницы
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef GUIPAGE_H
#define GUIPAGE_H

class CGUIPage : public CBaseGUI
{
public:
    //!Индекс страницы
    int Index = 0;

    CGUIPage(int index);
    virtual ~CGUIPage();
};

#endif
