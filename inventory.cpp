//
// Created by gianluca on 02/07/19.
//

#include <bits/unique_ptr.h>
#include "inventory.h"
#include"item.h"

inventory::inventory() {

    //TODO controllare se assegnamento funziona o no

    //forma grezza
    numSlot = 3;
    item inventory [numSlot];
}
inventory::~inventory()=default;

void  inventory::GetElement() {
    int i;
    for(i=0;i<numSlot;i++){

    }

}



void UseElement(){

}