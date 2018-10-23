﻿/***********************************************************************************
**
** GUIScissor.h
**
** Компонента для указания области вывода
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef GUISCISSOR_H
#define GUISCISSOR_H

class CGUIScissor : public CGUIPolygonal
{
    //!Координата компоненты по оси X контейнера, в котором находится элемент, относительно начала гампа
    int BaseX = 0;

    //!Координата компоненты по оси Y контейнера, в котором находится элемент, относительно начала гампа
    int BaseY = 0;

public:
    //!Гамп-родитель
    CGump *GumpParent = NULL;

    CGUIScissor(
        bool enabled,
        int baseX = 0,
        int baseY = 0,
        int x = 0,
        int y = 0,
        int width = 0,
        int height = 0);
    virtual ~CGUIScissor();

    virtual void Draw(bool checktrans = false);
};

#endif
