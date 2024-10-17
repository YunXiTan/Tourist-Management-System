#ifndef FLIGHT_H
#define FLIGHT_H
#include<iostream>
#include "TravelClass.h"
#include "FirstClass.h"
#include "BusinessClass.h"
#include "EconomyClass.h"
using namespace std;

class Flight{
    private:
      int airport_choice;
      int airline_choice;
      int travel_class_choice;
      string airport;
      string airline;
      string travel_class;
      TravelClass *travelClass;
      int flight_amount;
      double pre_price;
      double flight_price;
      int confirmBook;
      int gotoMenu;
    public:
      static double flight_totalp;
      void flightDetails();
      void calPrice();
      void resetPrice();
      //Flight operator+(const Flight& otherFlight);
      void checkBooking();
		  friend ostream& operator<<(ostream&,Flight);
};

#endif