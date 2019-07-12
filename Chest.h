//
// Created by gianluca on 02/07/19.
//

#ifndef ZZ_CHEST_H
#define ZZ_CHEST_H


#include <bits/unique_ptr.h>

class Chest {
public:

    Chest();
    ~Chest();
    bool OpenChest();


private:
    bool open;
    std::unique_ptr<Chest>linker;

};


#endif //ZZ_CHEST_H
