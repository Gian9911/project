//
// Created by gianluca on 02/07/19.
//

#include "item.h"
#include<iostream>
#include <bits/unique_ptr.h>
#include "Dice.h"
#include "Hero.h"
#include "inventory.h"

item::item(){//TODO MODIFICARE ;
    Dice a;
    Type = a.roll();
    strenght=a.roll();
    actived=false;
    std::unique_ptr<item>gino;

}

item::~item()=default;


void item::giveName() {
    if (Type % 3 == 0)
        firstName = "Spada";

    if(Type%2==0)
        firstName="Incantesimo";

    if(Type%1==0)
        firstName="Pozione";

}

bool item::isActived() {//o in inventory?
    actived=true;

}

int item::getMemoryPosition() {
    item a;
    std::unique_ptr<item>gino(&a);
    return &gino;
}