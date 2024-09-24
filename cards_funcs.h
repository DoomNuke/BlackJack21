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
Card *outcard = cards->head;
cards->length--;

        if (cards->length == 0)
        {
            cards->head = NULL;
            cards->tail = NULL;
        }
        //Pulling out a card and then pointing it to NULL value in order to remove it from the linked list - sort of a pop method//
            else
            {
                cards -> head = outcard -> next;  
            }
outcard -> next = NULL;
return outcard;
 }
}



void Card_List_Free(Cards_List *cards)
{
    while (cards -> length > 0)
        {
            free(Card_Remove(cards));
        }
}

#endif 
