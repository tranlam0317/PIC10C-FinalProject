#ifndef GAME_H
#define GAME_H

#include "character.h"
#include "score.h"
#include "health.h"
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>

class Game : public QGraphicsView {

public:
    Game(QWidget * parent = 0);

    QGraphicsScene * scene;
    character * player;
    Score * score;
    Health * health;
};


#endif // GAME_H
