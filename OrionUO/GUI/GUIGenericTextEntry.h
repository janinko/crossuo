﻿/***********************************************************************************
**
** GUIGenericTextEntry.h
**
** Компонента для отображения поля для ввода текста гампов от сервера
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef GUIGENERICTEXTENTRY_H
#define GUIGENERICTEXTENTRY_H

class CGUIGenericTextEntry : public CGUITextEntry
{
public:
    //!Индекс текста
    uint TextID = 0;

    CGUIGenericTextEntry(
        int serial, int index, ushort color, int x, int y, int maxWidth = 0, int maxLength = 0);
    virtual ~CGUIGenericTextEntry();
};

#endif
