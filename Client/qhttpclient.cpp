#include "qhttpclient.h"

QHTTPClient::QHTTPClient():QObject()
{

    connect(t, &QNetworkAccessManager::finished,this, &QHTTPClient::replyFinished);
}

void QHTTPClient::replyFinished(QNetworkReply *r)
{
    qDebug()<<r->readAll();
    //qDebug()<<"reply section";
}
