#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <QGraphicsRectItem>
#include <QObject>

class Obstacle : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Obstacle(QPoint point, QSize size);
};

#endif // OBSTACLE_H
