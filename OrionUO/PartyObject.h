﻿/***********************************************************************************
**
** PartyObject.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef PARTYOBJECT_H
#define PARTYOBJECT_H

//Объект группы
class CPartyObject
{
public:
    uint Serial = 0;

    CPartyObject();
    ~CPartyObject() {}
    class CGameCharacter *Character{ NULL };
    string GetName(int index);
};

#endif
