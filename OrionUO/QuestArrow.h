﻿/***********************************************************************************
**
** QuestArrow.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef QUESTARROW_H
#define QUESTARROW_H

//Класс для работы со стрелкой задания (над головой персонажа)
class CQuestArrow
{
public:
    uint Timer = 0;
    ushort X = 0;
    ushort Y = 0;
    bool Enabled = false;

    CQuestArrow();
    ~CQuestArrow();

    //Индекс начальной картинки стрелки
    static const ushort m_Gump = 0x1194;

    //Отрисовать стрелку
    void Draw();
};

extern CQuestArrow g_QuestArrow;

#endif
