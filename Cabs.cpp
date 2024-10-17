#include"Cabs.h"
#include"Menu.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void Cabs::cabDetails() {
    cout << "Welcome to Cabs Booking Management\n";
    cout << "Please select the car:\n";
    cout << "----------------------------------------------\n";
    cout << "1. Standard Cab - 4 seaters car (150RM / day)\n";
    cout << "2. Luxury   Cab - 6 seaters car (200RM / day)\n";
    cout << "----------------------------------------------\n";
    do {
        cout << "Selection: ";
        cin >> cabs_choice;
        if ((cabs_choice < 1) || (cabs_choice > 2)) {
            cout << "Invalid Selection!!!\n";
        }
        else if (cabs_choice == 1) {
            seat = 4;
            cabs_price = 150;
        }
        else if (cabs_choice == 2) {
            seat = 6;
            cabs_price = 200;
        }
    } while ((cabs_choice < 1) || (cabs_choice > 2));
    switch (cabs_choice)
    {
    case 1: car = "Standard Cab - 4 seaters car";
        break;
    case 2: car = "Luxury   Cab - 6 seaters car";
        break;
    default:
        break;
    }
    system("cls");
    cout << "Welcome to Cabs booking\n";
    cout << "Please enter how many days you want to rent\n";
    do {
        cout << "Selection: ";
        cin >> cabs_day;
        if ((cabs_day < 1) || (cabs_day > 1000)) {
            cout << "Invalid Selection!!!\n";
        }
    } while ((cabs_day < 1) || (cabs_day > 1000));
    system("cls");
    cout << "Welcome to cabs booking\n";
    cout << "Please select the model\n";
    cout << "-------------------------------------------\n";
    cout << "1. Manual transmission model\n";
    cout << "2. Automatic model\n";
    cout << "-------------------------------------------\n";
    do {
        cout << "Selection: ";
        cin >> cabs_model;
        if ((cabs_model < 1) || (cabs_model > 2)) {
            cout << "Invalid Selection!!!\n";
        }
    } while ((cabs_model < 1) || (cabs_model > 2));
    if (cabs_model == 1) {
        Car_model = "Manual transmission model";
    }
    else {
        Car_model = "Automatic model";
    }
    system("cls");
    cabs_price *= cabs_day;
    //checkBooking();

}

void Cabs::resetPrice(){
    cabs_totalp = 0;
}

ostream& operator<<(ostream &strm,Cabs c){
    strm << "CabsDetails\n";
    strm << "-------------------------------------------\n";
    strm << "seat: " << c.seat << endl;
    strm << "day: " << c.cabs_day << endl;
    strm << "model: " << c.Car_model << endl;
    strm << "Total Price: " << c.cabs_price << endl;
    return strm;
}

void Cabs::checkBooking(){
    cout << "\nPress 1 to confirm the booking\nPress 2 to book another car\n->";
    cin >> confirmBook;
    if(confirmBook==1){
        pre_price += cabs_price;
        cabs_totalp += pre_price;
        cout << "Booking done\n";
        cout << "Press 1 to go back to menu\n";
        cin >> gotoMenu;
        if(gotoMenu==1){
            system("cls");
            Menu();
        }
        else{
            system("cls");
            Menu();
        }
    }
    else if(confirmBook==2){
        system("cls");
        Menu();
    }
    else{
        system("cls");
        Menu();
    } 
}

