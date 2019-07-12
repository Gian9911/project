//
// Created by gianluca on 02/07/19.
//

#ifndef ZZ_ITEM_H
#define ZZ_ITEM_H


#include <string>

class item {
public:


    item();
    ~item();
    bool isActived();
    int getMemoryPosition();


    virtual void giveName();




private:
    int Type;
    int strenght;
    std::string firstName;
    bool actived;






};


#endif //ZZ_ITEM_H
