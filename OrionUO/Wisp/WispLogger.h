
#ifndef WISPLOGGER_H
#define WISPLOGGER_H

namespace Wisp
{
#define CWISPLOGGER 1

#if USE_WISP
#if CWISPLOGGER != 0
#define INITLOGGER(path) Wisp::g_WispLogger.Init(path);
#define LOG Wisp::g_WispLogger.Print
#if CWISPLOGGER == 2
#define LOG_DUMP(...)
#else //CWISPLOGGER != 2
#define LOG_DUMP Wisp::g_WispLogger.Dump
#endif //CWISPLOGGER == 2
#else  //CWISPLOGGER == 0
#define INITLOGGER(path)
#define LOG(...)
#define LOG_DUMP(...)
#endif //CWISPLOGGER!=0
#else
#if CWISPLOGGER
#define INITLOGGER(path)
#define LOG(...) fprintf(stdout, " LOG: " __VA_ARGS__)
#define LOG_DUMP(...)
#else //CWISPLOGGER == 0
#define INITLOGGER(path)
#define LOG(...)
#define LOG_DUMP(...)
#endif //CWISPLOGGER!=0
#endif

#define INITCRASHLOGGER(path) Wisp::g_WispCrashLogger.Init(path);
#define CRASHLOG Wisp::g_WispCrashLogger.Print
#define CRASHLOG_DUMP Wisp::g_WispCrashLogger.Dump

class CLogger
{
public:
    os_path FileName;

protected:
    FILE *m_File{ nullptr };

public:
    CLogger();
    ~CLogger();

    void Close();

    bool Ready() const { return m_File != nullptr; }

    void Init(const os_path &filePath);

    void Print(const char *format, ...);
    void VPrint(const char *format, va_list ap);
    void Print(const wchar_t *format, ...);
    void VPrint(const wchar_t *format, va_list ap);
    void Dump(uchar *buf, int size);
};

extern CLogger g_WispLogger;
extern CLogger g_WispCrashLogger;
} // namespace Wisp

#endif //WISPLOGGER_H
