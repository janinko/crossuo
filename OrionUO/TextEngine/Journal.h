﻿/***********************************************************************************
**
** Journal.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef TextDataH
#define TextDataH

//Класс для хранения и учета сообщений в журнале
class CJournal : public CBaseQueue
{
    int MaxSize = 0;
    int Size = 0;

public:
    CJournal(int maxSize);
    ~CJournal();

    //Добавить сообщение в журнал
    void Add(CTextData *obj);

    virtual void Clear();
};

extern CJournal g_Journal;

#endif
