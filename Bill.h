#ifndef BILL_H
#define BILL_H
#include"Flight.h"
#include"Hotel.h"
#include"Activity.h"
#include"Cabs.h"
#include"Customer.h"

class Bill: public Flight,public Activity,public Cabs, public Hotel, public Customer{
    private:
      string bill_ID;
      int gotoMenu;
    public:
      void showBill(); 
      void printBill();
      
};
#endif