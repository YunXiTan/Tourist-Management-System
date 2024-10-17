#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
using namespace std;

class Customer{
    private:
      string customer_gender;
      int customer_age;
      int customer_sex;
      string customer_mobile;
      string customer_Ic;
      string customer_email;
      
    public:
      static string customer_name;
      
      bool health_status;
      void CustomerDetails();
      bool checkGender();
      bool checkMobile();
      bool checkIc();
};

#endif