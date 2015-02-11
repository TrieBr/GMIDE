#include "Logger.h"
#include <QDebug>

std::map<LogType, QTextStream*> Logger::outputStreams;
QTextStream*  Logger::defaultStream = new QTextStream(stdout, QIODevice::WriteOnly);

QTextStream& Logger::Trace(LogType type)
{
     std::map<LogType, QTextStream*>::iterator f = outputStreams.find(type);
     if (f!=outputStreams.end()) {
         return *(f->second);
     }
     return *defaultStream;
}

void Logger::SetIODevice(LogType type, QIODevice *device)
{
    //TODO: Delete old QTextStream if it already exists
    outputStreams[type] = new QTextStream(device);
}

