//Jessica J Sun
//Assignment INFO3220

#include "player.h"
#include <QApplication>
#include <QGraphicsScene>

// Global variables
Player player;

int main(int argc, char *argv[])
{
    QApplication game(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();

    Player * player = new Player();

    // scene->addItem(player);

    // QGraphicsView * view = new QGraphicsView(scene);

    // view->show();

    return game.exec();
}