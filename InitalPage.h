#ifndef INITIALPAGE_H
#define INITIALPAGE_H
#include "Customer.h"
#include "Survey.h"

class InitialPage{
    public:
      Customer customers[100];
      Survey survey;
      static int no_customer;
      void displayPage();
};

#endif