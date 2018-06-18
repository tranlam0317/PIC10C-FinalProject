#ifndef MONSTER_H
#define MONSTER_H

#include <QGraphicsRectItem>
#include <QObject>

class monster: public QObject, public QGraphicsRectItem{
  Q_OBJECT 
    
public:
  monster(); 
  
public slots: 
  void move(); 
};
  

#endif // MONSTER_H
