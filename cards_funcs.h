#ifndef CARDS_FUNC_H
#define CARDS_FUNC_H

#include "cards.h"

// Initializing an empty card list - deck, player,dealer//
void Cards_List_init(Cards_List *cards)
{
    cards->length = 0;
    cards->head = NULL;
    cards-> tail = NULL;
}


void Cards_Add (Cards_List *cards, Card *m_card)
{
    if(cards -> length == 0){
        cards->head = m_card;
        cards->tail = m_card;
        cards->length = 1;
    }
    else
    {
        cards -> tail -> next = m_card;
        cards->tail = m_card;
        cards->length++;
    }
}

Card * Card_Remove(Cards_List *cards){
    if (cards->length == 0) return NULL;
    {
        Card *off_card = cards->head;
        cards->length--;
    }
    if (cards->length == 0){
        cards->head = NULL;
        cards->tail = NULL;
    }

    else
    //y u no work TODO: commit arson om C's official language creator//
    //                     ||                       //
    //                     ||                       //
    //                     \/                       //
    {
        cards -> head = off_card -> 
    }
}

void Card_List_Off(Cards_List *cards)
{
    while (cards -> length > 0){
        free(Card_Remove(cards));
    }
}

#endif 
