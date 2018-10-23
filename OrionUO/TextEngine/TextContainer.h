﻿/***********************************************************************************
**
** TextContainer.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef TEXTCONTAINER_H
#define TEXTCONTAINER_H

//Контейнер для текста
class CTextContainer : public CBaseQueue
{
public:
    int MaxSize = 0;
    int Size = 0;

    CTextContainer(int maxSize);
    ~CTextContainer();

    //Добавить текст
    void Add(CTextData *obj);

    //Удалить текст
    void Delete(CTextData *obj);

    //Очистить контейнер
    virtual void Clear();

    //Отрисовать системный чат
    void DrawSystemChat(int x, int y, int height);
};

extern CTextContainer g_SystemChat;

#endif
