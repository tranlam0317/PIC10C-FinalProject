#include <QApplication>
#include "character.h"
#include "score.h"
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QTimer> 

Game * game;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    
    game = new Game();
    game->show();

    return a.exec();
}
