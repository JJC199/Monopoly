#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <QString>

class Property;
class Player
{
public:
    Player(QString n, int pc);
    QString getName();
    int getCode();
    double getWallet();
    void addWallet(double amount);
    void subWallet(double amount);
    int getPosX();
    int getPosY();
    void setPosX(int x);
    void setPosY(int y);
    bool isJailed();
    void moveJail();
    void freeJail();
    void move(int spaces);
private:
    QString name;
    int playercode = 0;
    double wallet = 0;
    int posx;
    int posy;
    bool jailed = false;
    //While turnDisabled is not 0, player can't move (Jailed).
    int turnDisabled = false;

protected:

};

#endif // PLAYER_H
