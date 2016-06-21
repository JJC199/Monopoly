#include "gamelogic.h"

GameLogic::GameLogic()
{
    player1 = new Player("P1", 1);
    player2 = new Player("P2", 2);
}

//Function returns the number of the player who's currently on turn.
int GameLogic::getCurrentTurn(){
    return currentTurn;
}

//Function changes the turn to the next player.
int GameLogic::changeTurn(){
    if(currentTurn == 1){
        currentTurn = 2;
        return 2;
    }else{
        currentTurn = 1;
        return 1;
    }
}

//Function returns the player who is on turn.
Player GameLogic::getCurrentPlayer(){
    return *currentPlayer;
}

//Function set the current player attribute to a new one manually.
void GameLogic::setCurrentPlayer(Player player){
    currentPlayer = &player;
}

void GameLogic::rollDice(){
    srand (time(NULL));
    dice = rand() % 12 + 2;
}

int GameLogic::getDice(){
    return dice;
}

void GameLogic::setDice(int dado){
    dice = dado;
}

/*
//This is the main function of the class, who's purpose is to play the game each turn.
void GameLogic::play(){
    srand (time(NULL));

    changeTurn();

    //Replaces the current player tracker to the next player in turn.
    if(currentTurn == 1){
        currentPlayer = player1;
    }else if(currentTurn == 2){
        currentPlayer = player2;
    }

    //Rolls the dices for a chance to get a number between or equal to 2 and 12;
    dice = rand() % 12 + 2;

    //Since the player tracker is a pointer, we use it to move the player the amount rolled by the dice.
    currentPlayer->move(dice);

}
*/
