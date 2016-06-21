#include "property.h"
class Player;

Property::Property(QString n, double sp, double r, int x, int y, double m1, double m2)
{
    name = n;
    saleprice = sp;
    rent = r;
    houses = 0;
    posx = x;
    posy = y;
    forsale = true;
    mortaged = false;
    mortagereceived = m1;
    mortagetopay = m2;
    ownercode = 0;
}

QString Property::getName(){
    return name;
}

double Property::getSaleprice(){
    return saleprice;
}

double Property::getRent(){
    return rent;
}

int Property::getHouses(){
    return houses;
}

int Property::getPosX(){
    return posx;
}

int Property::getPosY(){
    return posy;
}

bool Property::checkAvailable(){
    return forsale;
}

void Property::sellProperty(Player *buyer){
    if(buyer->getWallet() > saleprice){
        buyer->subWallet(saleprice);
        ownercode = buyer->getCode();
        //Agregar aqui al arreglo de propiedades del player (Aun no implementado)
    }
}

void Property::payRent(Player *client, Player *owner){
    if(client->getWallet() > rent){
        owner->addWallet(rent);
        client->subWallet(rent);
    }
}

void Property::setMortage(Player *owner){
    if(!checkMortage() && owner->getCode() == checkOwner()){
        mortaged = true;
        owner->addWallet(mortagereceived);
    }
}

bool Property::checkMortage(){
    return mortaged;
}

void Property::payMortage(Player *owner){
    if(owner->getWallet() > mortagetopay && owner->getCode() == checkOwner()){
        owner->subWallet(mortagetopay);
        mortaged = false;
    }
}

int Property::checkOwner(){
    return ownercode;
}
