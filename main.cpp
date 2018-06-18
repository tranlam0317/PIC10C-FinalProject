#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //adding a player and displaying it
    QGraphicsScene * scene = new QGraphicsScene();
    QGraphicsRectItem * player = new QGraphicsRectItem();
    player->setRect(0,0,100,100);
    scene->addItem(player);
    QGraphicsView * view = new QGraphicsView(scene);

    view->show();
    return a.exec();
}
