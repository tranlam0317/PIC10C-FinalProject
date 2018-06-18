#ifndef BEAM_H
#define BEAM_H

#include <QGraphicsRectItem>
#include <QObject>

class beam: public QObject, public QGraphicsRectItem{
    Q_OBJECT

public:
    beam();

public slots:
    void move();
};


#endif // BEAM_H
