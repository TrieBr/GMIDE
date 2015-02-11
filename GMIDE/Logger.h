#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <map>
#include <QIODevice>
#include <QTextStream>

enum LogType {
    LogIDE,
    LogCVS,
    LogBuild
};

class Logger
{
public:
    //Print a trace message
    static QTextStream &Trace(LogType type = LogIDE);
    //Set the output device for the specified log type
    static void SetIODevice(LogType type, QIODevice* device);

private:
    static std::map<LogType, QTextStream*>   outputStreams;  //The output devices for each type of log
    static QTextStream*                     defaultStream;  //Default output stream

};

#endif // LOGGER_H
