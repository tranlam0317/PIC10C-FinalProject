#ifndef BEAM_H
#define BEAM_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>

class beam: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT

public:
    beam(QGraphicsItem * parent = 0);

public slots:
    void move();
};

#endif // BEAM_H
