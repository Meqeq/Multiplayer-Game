#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsRectItem>
#include "bullet.h"

enum DIRECTION { UP, DOWN, LEFT, RIGHT};

class Player : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Player(QPoint x, QSize h);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    Bullet * playerBullets;
    int bulletMax;
    int xPos;
    int yPos;
    int movingX, movingY;
    void movePlayer();
    bool movementDirection[4] = {false};
public slots:
    void spawn();
    void takeOver();
};

#endif // PLAYER_H