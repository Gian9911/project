//
// Created by gianluca on 02/07/19.
//

#include "Chest.h"
#include "item.h"
Chest::Chest() {
    open=false;
    item a;
    linker=a.getMemoryPosition() ;
}