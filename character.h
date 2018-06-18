#ifndef CHARACTER_H
#define CHARACTER_H

#include <QGraphicsRectItem>

class character: public QGraphicsRectItem {
    
public:
    void keyPressEvent(QKeyEvent *event);
    
public slots:
    void spawn(); 
};

#endif // CHARACTER_H
