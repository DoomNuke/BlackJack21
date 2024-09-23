#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include "cards.h"
#include "gamestate.h"


//Defines Of The Ranks And Suits//

#define RANKS (13)
#define SUITS (4)


const uint8_t num_of_cards = RANKS*SUITS; //52 in total//

const char Suits[SUITS][8] = 
{
    "Hearts", "Clubs", "Diamonds", "Spades"
};

const char Ranks[RANKS][6] =
{
    "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Prince", "Queen", "King"
};

Gamestate init_game(void);




int main() 
{
    Gamestate gameState;
    gameState = init_game();

    //Randomizing a new seed each round//
    srand(time(NULL));        




    //Freeing the allocated memory//
    Cards_List_Free(&gameState.Deck);
    Cards_List_Free(&gameState.Player);
    Cards_List_Free(&gameState.Dealer);

    return 0;
}

Gamestate init_game(void){
    Gamestate gameState;

    gameState.cash = 1000;
    gameState.pot = 0;

    Cards_List_init(&gameState.Deck);
    Cards_List_init(&gameState.Player);
    Cards_List_init(&gameState.Dealer);

    Card *current = NULL;
}

