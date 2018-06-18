#include "score.h"

score::score(QGraphicsItem *parent):QGraphicsTextItem(parent) {
     //initalize the score to 0
    scores = 0;

    //draw the text
    setPlainText(QString("Score ") + QString:: number(scores));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times", 16));   
}

void score::increase(){
    
}

int score::getScore(){
    
}
