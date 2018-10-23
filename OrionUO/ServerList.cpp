﻿// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
/***********************************************************************************
**
** ServerList.cpp
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#include "stdafx.h"

CServerList g_ServerList;

//---------------------------------------CServer------------------------------------

CServer::CServer()
{
}

CServer::CServer(
    ushort index, const string &name, uchar fullPercent, uchar timezone, int ip, bool selected)
    : Index(index)
    , Name(name)
    , FullPercent(fullPercent)
    , Timezone(timezone)
    , IP(ip)
    , Selected(selected)
{
}

CServer::~CServer()
{
}

//-------------------------------------CServerList----------------------------------

CServerList::CServerList()
{
}

CServerList::~CServerList()
{
    m_Servers.clear();
}

void CServerList::ParsePacket(Wisp::CDataReader &reader)
{
    m_Servers.clear();
    g_ServerList.LastServerIndex = 0;

    reader.Move(1);

    uint16_t numServers = reader.ReadUInt16BE();

    if (numServers == 0)
        LOG("Warning!!! Empty server list\n");

    for (uint16_t i = 0; i < numServers; i++)
    {
        ushort id = reader.ReadUInt16BE();
        string name = reader.ReadString(32);
        uchar fullPercent = reader.ReadUInt8();
        uchar timezone = reader.ReadUInt8();
        uint ip = reader.ReadUInt32LE(); //little-endian!!!
        bool selected = (name == g_ServerList.LastServerName);

        if (selected)
            g_ServerList.LastServerIndex = (int)i;

        m_Servers.push_back(CServer(id, name, fullPercent, timezone, ip, selected));

        char ipString[30] = { 0 };
        sprintf_s(
            ipString,
            "%i.%i.%i.%i",
            (ip >> 24) & 0xFF,
            (ip >> 16) & 0xFF,
            (ip >> 8) & 0xFF,
            ip & 0xFF);
        CPingThread *pingThread = new CPingThread(i, ipString, 100);
        pingThread->Run();
    }

    if (g_ServerList.LastServerIndex < numServers && g_MainScreen.m_AutoLogin->Checked)
        g_Orion.ServerSelection(g_ServerList.LastServerIndex);
    else
        g_Orion.InitScreen(GS_SERVER);

    g_ServerScreen.UpdateContent();
}

CServer *CServerList::GetServer(int index)
{
    DEBUG_TRACE_FUNCTION;
    if (index < m_Servers.size())
        return &m_Servers[index];

    return NULL;
}

CServer *CServerList::GetSelectedServer()
{
    DEBUG_TRACE_FUNCTION;

    for (CServer &server : m_Servers)
    {
        if (server.Selected)
            return &server;
    }

    return NULL;
}

CServer *CServerList::Select(int index)
{
    DEBUG_TRACE_FUNCTION;
    CServer *server = NULL;

    DFOR (i, m_Servers.size() - 1, 0)
    {
        if (index == i)
        {
            server = &m_Servers[i];
            m_Servers[i].Selected = true;
        }
        else
            m_Servers[i].Selected = false;
    }

    return server;
}

