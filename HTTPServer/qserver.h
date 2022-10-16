#ifndef QSERVER_H
#define QSERVER_H

#include <QObject>

#include <QTcpServer>
#include <QTcpSocket>


class QServer:public QObject
{
    Q_OBJECT
private:
    QTcpServer *server;
    QTcpSocket *client_tcp;


public:
    QServer();

public slots:
    void response();
};

#endif // QSERVER_H
