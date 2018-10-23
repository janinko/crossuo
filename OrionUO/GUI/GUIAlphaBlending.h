﻿/***********************************************************************************
**
** GUIAlphaBlending.h
**
** Компонента для применения блендинга по альфа-каналу
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef GUIALPHABLENDING_H
#define GUIALPHABLENDING_H

class CGUIAlphaBlending : public CGUIBlending
{
public:
    //!Значение для установки альфа-канала
    float Alpha = 0.0f;

    CGUIAlphaBlending(bool enabled, float alpha);
    virtual ~CGUIAlphaBlending();

    virtual void Draw(bool checktrans = false);
};

#endif
