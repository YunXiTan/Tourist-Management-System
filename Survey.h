#ifndef SURVEY_H
#define SURVEY_H
#include<iostream>
#include"Customer.h"
using namespace std;

const int MAX_CUSTOMERS = 100; // Define the maximum number of customers

class Survey {
private:
    //bool status;
    int gotoMenu;
public:
    void checkStatus(Customer *customers, int numCustomers);
    //bool showStatus(Customer *customers, int numCustomers);
};

#endif
