#include "beam.h"
#include <QTimer>
#include <QGraphicsScene>

beam::beam() : QObject(), QGraphicsRectItem()
{
   //set size of beam
    setRect(0,0,10,50);

    //connect
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    //beam moves every 50 milisec
    timer->start(50);
}

void beam::move(){
    //move beam up
    setPos(x(),y() - 10);
   
    //delete beam if it does out of view
    if(pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
}
