#include "character.h"
#include "beam.h"
#include "monster.h"
#include "QGraphicsScene"
#include <QKeyEvent>

void character:: keyPressEvent(QKeyEvent *event){
    //left and right movement 
    if(event->key() == Qt::Key_Left){
        if(pos().x() >0)
        setPos(x() - 10, y());
    }

    else if(event->key() == Qt::Key_Right){
        if(pos().x() + 100 < 800)
        setPos(x() + 10, y());
    }
    
    //space button pressed
    else if(event->key() == Qt::Key_Space){
        beam * Beam = new beam();
        Beam->setPos(x(),y());
        scene()->addItem(Beam);
    }
}

void character::spawn(){
    //create a monster 
    monster * Monster = new monster();
}
