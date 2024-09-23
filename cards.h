#ifndef CARDS_H
#define CARDS_H

#include <stdio.h>
#include <stdint.h>

typedef struct Card{
    uint8_t data;
    struct Card *next;
}Card;



typedef struct Cards_List{
    Card *head;
    Card *tail;
    size_t length;
}Cards_List;


#endif


