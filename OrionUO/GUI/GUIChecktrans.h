﻿/***********************************************************************************
**
** GUIChecktrans.h
**
** Компонента применения трафарета на указанную зону
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef GUICHECKTRANS_H
#define GUICHECKTRANS_H

class CGUIChecktrans : public CGUIPolygonal
{
public:
    CGUIChecktrans(int x, int y, int width, int height);
    virtual ~CGUIChecktrans();

    virtual void Draw(bool checktrans = false);
    virtual bool Select() { return false; }
};

#endif
