#include "character.h"
#include "beam.h"
#include "QGraphicsScene"
#include <QKeyEvent>

void character:: keyPressEvent(QKeyEvent *event){
    //left and right movement 
    if(event->key() == Qt::Key_Left){
        setPos(x() - 10, y());
    }

    else if(event->key() == Qt::Key_Right){
        setPos(x() + 10, y());
    }
    
    //space button pressed
    else if(event->key() == Qt::Key_Space){
        beam * Beam = new beam();
        Beam->setPos(x(),y());
        scene()->addItem(Beam);
    }
}
