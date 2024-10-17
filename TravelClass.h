#ifndef TRAVELCLASS_H
#define TRAVELCLASS_H
#include <iostream>
using namespace std;

class TravelClass{
    public:
      virtual double getPrice() const {return 0;}
};


#endif