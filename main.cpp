#include <QApplication>
#include "character.h"
#include <QGraphicsRectItem>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //adding a player and displaying it
    QGraphicsScene * scene = new QGraphicsScene();
    character * player = new character();
    player->setRect(0,0,100,100);
    scene->addItem(player);
    
     //making player focused
    player->setFlag((QGraphicsItem::ItemIsFocusable));
    player->setFocus();
    
    //displaying player
    QGraphicsView * view = new QGraphicsView(scene);

    view->show();
    return a.exec();
}
