#ifndef NETWORK_H
#define NETWORK_H

#include <QObject>
#include <QTcpServer>
#include "clientsocket.h"
#include "playeraction.h"

class Network : public QTcpServer
{
    Q_OBJECT
public:
    explicit Network(quint16 port = 0); // port jest 2 bajtowa liczba
    quint16 port() const { return serverPort(); }
    PlayerAction parsePlayerAction(const QByteArray& data) const;

signals:

public slots:
    void sendAll(const QString &message) const;
    void onNewConnection();
    void onDisconnected();
    void onMessage(const QString& message) const;
    void onMessage(const QByteArray& data) const;

protected:
    QList<Socket*> clients;
};

#endif // NETWORK_H
