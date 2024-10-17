#ifndef BUSINESSCLASS_H
#define BUSINESSCLASS_H
#include <iostream>
#include "TravelClass.h"
using namespace std;


class BusinessClass : public TravelClass{
    public:
      double getPrice() const { return 150;}
};

#endif