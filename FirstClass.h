#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H
#include <iostream>
#include "TravelClass.h"
using namespace std;


class FirstClass : public TravelClass{
    public:
      double getPrice() const { return 200;}
};

#endif