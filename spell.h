//
// Created by gianluca on 02/07/19.
//

#ifndef ZZ_SPELL_H
#define ZZ_SPELL_H

#include <bits/unique_ptr.h>
#include "item.h"
#include "Dice.h"


class spell: public item {
public:
spell();
~spell();

int CalculateDamage();
void IsLegalFight();


private:
    std::unique_ptr<spell>attach;

};


#endif //ZZ_SPELL_H
