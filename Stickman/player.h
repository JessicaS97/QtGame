#ifndef PLAYER_H
#define PLAYER_H

#include <QString>
#include <QGraphicsRectItem>
#include <QMediaPlayer>
#include <QObject>
#include <QGraphicsItem>

using namespace std;

class Player: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    // Player();
    // ~Player();
    Player(QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent * event);
    /*
    int getPosX(){return posx;}
    int getPosY(){return posy;}

    string getSize();

    void chooseSize(string size);
    void setPosX(int posx);
    void setPosY(int posy);

     */

private:
    //int posx;
    //int posy;
    //string size;
    QMediaPlayer * jumpSound;


};

#endif // PLAYER_H
