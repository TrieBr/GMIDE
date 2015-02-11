#ifndef TEXTEDITIODEVICE_H
#define TEXTEDITIODEVICE_H

#include <QPlainTextEdit>
#include <QIODevice>

class TextEditIODevice : public QIODevice
{
public:
    TextEditIODevice(QPlainTextEdit *const textEdit);
    ~TextEditIODevice();

protected:
    qint64 readData(char *data, qint64 maxSize) { return 0; }
    qint64 writeData(const char *data, qint64 maxSize);

private:
    QPlainTextEdit*  textEdit;       //The text edit to stream output to
};

#endif // TEXTEDITIODEVICE_H
