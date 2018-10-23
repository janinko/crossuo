﻿
#ifndef WISPPACKETREADER_H
#define WISPPACKETREADER_H

namespace Wisp
{
class CPacketReader : public Wisp::CDataReader
{
    int MaxPacketStackSize = 5;

public:
    CPacketReader();
    virtual ~CPacketReader();

    void Read(class CConnection *connection);

    virtual int GetPacketSize(const UCHAR_LIST &packet, int &offsetToSize) { return 0; }

protected:
    virtual void OnPacket() {}

    virtual void OnReadFailed() {}

public:
    deque<UCHAR_LIST> m_PacketsStack;
};

}; // namespace Wisp

#endif
