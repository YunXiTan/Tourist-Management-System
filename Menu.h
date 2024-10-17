#ifndef MENU_H
#define MENU_H
#include<iostream>
#include "InitalPage.h"
#include"Menu.h"
#include"Flight.h"
#include"Hotel.h"
#include"Bill.h"
#include"Cabs.h"
#include"Activity.h"

class Menu: public InitialPage
{
    private:
      int choice;
      int gotoMenu;
      Flight flight;
      Hotel hotel;
      Cabs cabs;
      Activity activity;
      Bill bill;
    public:
      Menu();
};

#endif