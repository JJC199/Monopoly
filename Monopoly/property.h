#ifndef PROPERTY_H
#define PROPERTY_H
#include <string>
#include <QString>
#include "player.h"

class Property
{
public:
    Property(QString n, double sp, double r, int x, int y, double m1, double m2);
    QString getName();
    double getSaleprice();
    double getRent();
    int getHouses();
    int getPosX();
    int getPosY();
    bool checkAvailable();
    void sellProperty(Player *buyer);
    void payRent(Player *client, Player *owner);
    void setMortage(Player *owner);
    bool checkMortage();
    void payMortage(Player *owner);
    int checkOwner();
private:
    QString name;
    double saleprice;
    double rent;
    int houses;
    int posx;
    int posy;
    bool forsale;
    bool mortaged;
    double mortagereceived;
    double mortagetopay;
    int ownercode;
protected:

};

#endif // PROPERTY_H
