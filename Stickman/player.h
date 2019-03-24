#ifndef PLAYER_H
#define PLAYER_H

#include <QString>

using namespace std;

class Player
{
public:
    Player();
    ~Player();
    int getPosX(){return posx;}
    int getPosY(){return posy;}

    string getSize();

    void chooseSize(string size);
    void setPosX(int posx);
    void setPosY(int posy);

private:
    int posx;
    int posy;
    string size;
};

#endif // PLAYER_H
