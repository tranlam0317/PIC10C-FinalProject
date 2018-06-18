#ifndef CHARACTER_H
#define CHARACTER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>


class character: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    character(QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent *event);
    
public slots:
    void spawn(); 
};

#endif // CHARACTER_H
