#include "beam.h"
#include <QTimer>

beam::beam()
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
}
