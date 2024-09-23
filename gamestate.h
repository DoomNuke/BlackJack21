#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <stdint.h>
#include "cards.h"

typedef struct Gamestate{
    uint16_t cash;
    uint16_t pot;
    Cards_List Deck;
    Cards_List Player;
    Cards_List Dealer;
}Gamestate;

#endif