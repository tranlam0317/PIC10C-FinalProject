#include <QApplication>
#include "character.h"
#include "score.h"
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QTimer> 

score * Score;

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

    //disabling scroll bars
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //show the view
    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    player->setPos(view->width()/2, view->height() - player->rect().height());
    
    //spawn monsters 
    QTimer * timer = new QTimer(); 
    QObject:: connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
    timer->start(2500);
    
    //create a score
    score * Score = new score();
    scene ->addItem(Score);
    
    return a.exec();
}
