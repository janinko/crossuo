﻿/***********************************************************************************
**
** FastWalk.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef FASTWALK_H
#define FASTWALK_H

//Класс для обработки стека fastwalk
class CFastWalkStack
{
private:
    //fastwalk стек
    uint m_Keys[MAX_FAST_WALK_STACK_SIZE];

public:
    CFastWalkStack() { memset(m_Keys, 0, sizeof(m_Keys)); }
    ~CFastWalkStack() {}

    void SetValue(int index, int value);

    void AddValue(int value);

    uint GetValue();
};

#endif
