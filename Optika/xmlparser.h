#ifndef XMLPARSER_H
#define XMLPARSER_H
#include <QtXml/QtXml>
#include <QFile>

class XMLParser
{
public:
    XMLParser(QFile *file);
    void parse();

private:
    QDomElement root;
    QDomNodeList findSheet(QDomElement);
};

#endif // XMLPARSER_H
