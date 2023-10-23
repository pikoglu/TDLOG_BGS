#pragma once
#include <Imagine/Graphics.h>
#include <Imagine/Images.h>
#include <Imagine/Common.h>
using namespace Imagine;

#include <iostream>
using namespace std;

class players{
    string col;
    int moove_points;
    int attack_bonus;
    int defense_bonus;
    Coords<2> pos;
public:

};
class ordinaire:public players{
public:
    ordinaire();
};
class costaud:public players{
public:
    costaud();
};
class dur:public players{
public:
    dur();
};
class rapide:public players{
public:
    rapide();
};
class fute:public players{
public:
    fute();
};





