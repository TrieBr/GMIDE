#include "TextEditIODevice.h"

TextEditIODevice::TextEditIODevice(QPlainTextEdit *const textEdit)
    :textEdit(textEdit)
{
    open(QIODevice::WriteOnly|QIODevice::Text);
}

TextEditIODevice::~TextEditIODevice()
{

}

qint64 TextEditIODevice::writeData(const char *data, qint64 maxSize)
{
    if(textEdit)
        {
            textEdit->appendPlainText(data);
        }
    return maxSize;
}

