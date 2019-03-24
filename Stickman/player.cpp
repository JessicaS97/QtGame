#include "player.h"
#include <QDebug>
#include <QKeyEvent>

Player::Player(QGraphicsItem* parent) : QGraphicsRectItem (parent) {
    jumpSound = new QMediaPlayer();
    jumpSound->setMedia(QUrl("qrc:/sounds/bg.mp3"));
}

void Player::keyPressEvent(QKeyEvent * event)
{

    // Y starting position is at the top
    if(event->key() == Qt::Key_Left) {
        setPos(x()-10,y());
    } else if(event->key() == Qt::Key_Right) {
        setPos(x()+10, y());
    } else if(event->key() == Qt::Key_Space) {
        // Make player jump

        // Play jump sound
        if(jumpSound->state() == QMediaPlayer::PlayingState) {
            jumpSound->setPosition(0);
        } else if(jumpSound->state() == QMediaPlayer::StoppedState) {
            jumpSound->play();
        }
    }
}

/*
void Player::chooseSize(string size)
{
    if(size.compare("tiny") == 0) {

    } else if(size.compare("normal") == 0) {

    } else if(size.compare("large") == 0) {

    } else if(size.compare("giant") == 0) {

    } else {
        // Diplay invalid size value
    }
}

*/
