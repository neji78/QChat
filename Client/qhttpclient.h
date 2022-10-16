#ifndef QHTTPCLIENT_H
#define QHTTPCLIENT_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class QHTTPClient:public QObject
{
    Q_OBJECT
private:

public:
    QHTTPClient();

public slots:
    void replyFinished(QNetworkReply *r);
};

#endif // QHTTPCLIENT_H
