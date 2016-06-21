#include "player.h"

Player::Player(QString n, int pc)
{
    name = n;
    playercode = pc;
    wallet = 1500;
    posx = 704;
    posy = 704;
    jailed = false;
    turnDisabled = 0;
}

QString Player::getName(){
    return name;
}

int Player::getCode(){
    return playercode;
}

double Player::getWallet(){
    return wallet;
}

void Player::addWallet(double amount){
    wallet += amount;
}

void Player::subWallet(double amount){
    wallet -= amount;
}

int Player::getPosX(){
    return posx;
}

int Player::getPosY(){
    return posy;
}

void Player::setPosX(int x){
    posx = x;
}

void Player::setPosY(int y){
    posy = y;
}

bool Player::isJailed(){
    return jailed;
}

void Player::moveJail(){
    jailed = true;
}

void Player::freeJail(){
    jailed = false;
}

//Board size: 780 x 780
//Corner boxes: 120 x 120
//Normal boxes: 60px Width
//Player icons: 32x32
void Player::move(int spaces){
    if(spaces > 0 && !isJailed()){
        if(posx == 704){
            if(posy == 704){ //SouthEast Corner
                setPosX(614);
                return move(spaces - 1);
            }else{ //East Lane
                setPosY(posy + (posy == 60 ? 90 : 30));
                return move(spaces - 1);
            }
        }
        if(posy == 704){
            if(posx == 60){ //SouthWest Corner
                setPosY(624);
                return move(spaces - 1);
            }else{ //South Lane
                setPosX(posx - (posx == 704 ? 90 : 60));
                return move(spaces - 1);
            }
        }
        if(posx == 60){
            if(posy == 60){ //NorthWest Corner
                setPosX(134);
                return move(spaces - 1);
            }else{ //West Lane
                setPosY(posy - (posy == 704 ? 90 : 60));
                return move(spaces - 1);
            }
        }
        if(posy == 60){
            if(posx == 704){ //NorthEast Corner
                setPosY(134);
                return move(spaces - 1);
            }else{ //North Lane
                setPosX(posx + (posx == 60 ? 90 : 60));
                return move(spaces - 1);
            }
        }
    }
}
