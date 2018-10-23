﻿/***********************************************************************************
**
** UseItemsList.h
**
** Copyright (C) September 2017 Hotride
**
************************************************************************************
*/

#ifndef USEITEMSLIST_H
#define USEITEMSLIST_H

class CUseItemActions
{
    uint Timer = 0;

private:
    deque<uint> m_List;

public:
    CUseItemActions() {}
    ~CUseItemActions() {}

    void Add(int serial);

    void Clear() { m_List.clear(); }

    void Process();
};

extern CUseItemActions g_UseItemActions;

#endif //USEITEMSLIST_H
