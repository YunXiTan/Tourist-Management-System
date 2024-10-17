#include<iostream>
#include"InitalPage.h"
#include"Customer.h"
#include"Survey.h"
#include"Flight.h"
#include"Hotel.h"
#include"Cabs.h"
#include"Activity.h"
#include"windows.h"
using namespace std;

string Customer::customer_name;
double Flight::flight_totalp;
double Hotel::hotel_totalp;
double Cabs::cabs_totalp;
double Activity::activity_totalp;

int main() 
{
    std::system("color ED");
    InitialPage initial;
    initial.displayPage();

    system("pause");
    return 0;
}