#include "monster.h"
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>
#include <QList>
#include "game.h"

monster::monster() QObject(), QGraphicsRectItem(){
     //set random position 
    int random_number = rand() % 700; 
    setPos(random_number,0);
    
    //set size of monster as the size of the character
    setRect(0,0,100,100);

    //connect
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    //beam moves every 50 milisec
    timer->start(50);
}

void monster::move(){
    //move monster down
    setPos(x(),y() + 5);

    //delete beam if it does out of view
    if(pos().y() > 600){
        scene()->removeItem(this);
        delete this;
    }

}
