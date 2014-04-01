#include "xmlparser.h"

XMLParser::XMLParser(QFile *file)
{
    QDomDocument doc;
    QString errorStr;
    int errorLine;
    int errorColumn;
    if (!doc.setContent(file, true, &errorStr, &errorLine, &errorColumn)) {
        qDebug() << "Line %d, column %d: %s", errorLine, errorColumn, errorStr;
        return;
    }
    root = doc.documentElement();

    QDomNodeList list = this->findSheet(root);
    list.count()
    int ii = 0;
    ii++;
}

void XMLParser::parse(){

}

QDomNodeList XMLParser::findSheet(QDomElement elem){
    QDomNodeList list = elem.elementsByTagName("WorkSheet");
    if(!list.count()){
        for(QDomNode node = elem.firstChild(); !node.isNull(); node = node.nextSibling()){
            this->findSheet(node.toElement());
        }
    }
    else return list;
}
