//Jessica J Sun
//Assignment INFO3220

#include "player.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMediaPlayer>
#include <QString>
#include <QFile>


// Global variables
// Player player;

int main(int argc, char *argv[])
{
    QApplication game(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();

    // Create player
    Player * player = new Player();
    player->setRect(0,0,100,100);

    // Add item to scene
    scene->addItem(player);
    // Focused to receive events
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    // Player * player = new Player();
    // scene->addItem(player);

    // Add view to scene to visualize game
    QGraphicsView * view = new QGraphicsView(scene);

    // Play background music
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("qrc:/sounds/bgsound.mp3"));
    sound->play();
    view->show();

    return game.exec();
}
