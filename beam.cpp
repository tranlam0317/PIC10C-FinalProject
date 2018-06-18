#include "beam.h"
#include "monster.h"
#include "score.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>

extern score * Score;

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
     //if beam collides w/ enemy: destroy both
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i) {
        if (typeid(*(colliding_items[i])) == typeid(monster)) {
            
           //increase the score
            Score->increase();
           
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);

            delete colliding_items[i];
            delete this;
            return;
        }
    }
   
    //move beam up
    setPos(x(),y() - 10);
   
    //delete beam if it does out of view
    if(pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
}
