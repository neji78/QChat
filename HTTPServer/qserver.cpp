#include "qserver.h"

QServer::QServer():QObject()
{
    server = new QTcpServer();
    server->listen(QHostAddress("localhost"),1080);
    connect(server,&QTcpServer::newConnection,this,&QServer::response);

}
void QServer::response()
{
    client_tcp = server->nextPendingConnection();
    qDebug()<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

    qDebug()<<client_tcp->peerAddress()<<client_tcp->peerPort();
    while(!(client_tcp->waitForReadyRead(100)));
    qDebug()<<client_tcp->readAll();
    //std::string szRequest = client_tcp->readAll().toStdString();
    // make response

    connect(client_tcp,SIGNAL(disconnected()),client_tcp,SLOT(deleteLater()));
    client_tcp->disconnectFromHost();
}
