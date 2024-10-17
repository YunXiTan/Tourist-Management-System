#ifndef HOTEL_H
#define HOTEL_H
#include<iostream>

using namespace std;

class Hotel{
    private:
      int hotel_choice;
      int hotel_package;
      int hotel_amount;
      string hotel;
      string package;
      double pre_price;
		  double hotel_price;
      int confirmBook;
      int gotoMenu;
      
    public:
      static double hotel_totalp;
      void hotelDetails();
      void checkBooking();
		  void resetPrice();
		  friend ostream& operator<<(ostream&,Hotel);
     // Hotel operator+(const Hotel& otherHotel);
};

#endif