#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include "property.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>


class GameLogic
{
public:
    GameLogic();
    int getCurrentTurn();
    int changeTurn();
    Player getCurrentPlayer();
    void setCurrentPlayer(Player player);
    void rollDice();
    int getDice();
    void setDice(int dado);
    void play();
    Player *player1;
    Player *player2;
private:
    int dice;
    int currentTurn = 1;
    Player *currentPlayer;
};

#endif // GAMELOGIC_H
