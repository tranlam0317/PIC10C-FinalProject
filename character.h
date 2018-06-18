#ifndef CHARACTER_H
#define CHARACTER_H

#include <QGraphicsRectItem>
#include <QObject>


class character: public QObject, public QGraphicsRectItem {
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent *event);
    
public slots:
    void spawn(); 
};

#endif // CHARACTER_H
