#ifndef ECONOMYCLASS_H
#define ECONOMYCLASS_H
#include <iostream>
#include "TravelClass.h"
using namespace std;

class EconomyClass : public TravelClass{
    public:
      double getPrice() const { return 100;}
};

#endif