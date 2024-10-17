#include "InitalPage.h"
#include"Menu.h"
// #include"Flight.h"
// #include"Hotel.h"
// #include"Bill.h"
// #include"Cabs.h"
// #include"Activity.h"
#include<iostream>
#include <windows.h>
using namespace std;

Menu::Menu() 
{
    cout << "\t\t      * Breezy Island Travels *\n" << endl;
    
    cout << "-------------------------Main Menu--------------------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|\tFlight Management   -> 1\t|" << endl;
    cout << "\t|\tHotel Management    -> 2\t|" << endl;
    cout << "\t|\tCabs Management     -> 3\t|" << endl;
    cout << "\t|\tActivity Management -> 4\t|" << endl;
    cout << "\t|\tCharges & Bill      -> 5\t|" << endl;
    cout << "\t|\tExit                -> 6\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\n\nPlease enter your choice: ";
    cin >> choice;

    if(choice==1){   
        system("cls"); 
        cout << "\t\t      * Breezy Island Travels *\n" << endl;
        cout << "-------------------------Main Menu--------------------------" << endl;

        cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|\tFlight Management   -----> 1\t|" << endl;
        cout << "\t|\tHotel Management    -> 2\t|" << endl;
        cout << "\t|\tCabs Management     -> 3\t|" << endl;
        cout << "\t|\tActivity Management -> 4\t|" << endl;
        cout << "\t|\tCharges & Bill      -> 5\t|" << endl;
        cout << "\t|\tExit                -> 6\t|" << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;
        Sleep(800);
        system("cls");
        flight.flightDetails();
        cout << flight;
        flight.checkBooking();
    }
    else if(choice==2){
        system("cls");
        cout << "\t\t      * Breezy Island Travels *\n" << endl;
        cout << "-------------------------Main Menu--------------------------" << endl;

        cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|\tFlight Management   -> 1\t|" << endl;
        cout << "\t|\tHotel Management    -----> 2\t|" << endl;
        cout << "\t|\tCabs Management     -> 3\t|" << endl;
        cout << "\t|\tActivity Management -> 4\t|" << endl;
        cout << "\t|\tCharges & Bill      -> 5\t|" << endl;
        cout << "\t|\tExit                -> 6\t|" << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;
        Sleep(800);
        system("cls");
        hotel.hotelDetails();
        cout << hotel;
        hotel.checkBooking();
    }
    else if(choice==3){
        Sleep(800);
        system("cls");
        cabs.cabDetails();
        cout << cabs;
        cabs.checkBooking();
    }
    else if(choice==4){
        system("cls");
        cout << "\t\t      * Breezy Island Travels *\n" << endl;
        cout << "-------------------------Main Menu--------------------------" << endl;

        cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|\tFlight Management   -> 1\t|" << endl;
        cout << "\t|\tHotel Management    -> 2\t|" << endl;
        cout << "\t|\tCabs Management     -> 3\t|" << endl;
        cout << "\t|\tActivity Management -----> 4\t|" << endl;
        cout << "\t|\tCharges & Bill      -> 5\t|" << endl;
        cout << "\t|\tExit                -> 6\t|" << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;
        Sleep(800);
        system("cls");
        activity.activityDetails();
        cout << activity;
        activity.checkBooking();
    }
    else if(choice==5){
        system("cls");
        cout << "\t\t      * Breezy Island Travels *\n" << endl;
        cout << "-------------------------Main Menu--------------------------" << endl;

        cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|\tFlight Management   -> 1\t|" << endl;
        cout << "\t|\tHotel Management    -> 2\t|" << endl;
        cout << "\t|\tCabs Management     -> 3\t|" << endl;
        cout << "\t|\tActivity Management -> 4\t|" << endl;
        cout << "\t|\tCharges & Bill      -----> 5\t|" << endl;
        cout << "\t|\tExit                -> 6\t|" << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;
        Sleep(800);
        system("cls");
        bill.showBill(); 
    }
    else if(choice==6){
        system("cls");
        cout << "\t\t      * Breezy Island Travels *\n" << endl;
        cout << "-------------------------Main Menu--------------------------" << endl;

        cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|\tFlight Management   -> 1\t|" << endl;
        cout << "\t|\tHotel Management    -> 2\t|" << endl;
        cout << "\t|\tCabs Management     -> 3\t|" << endl;
        cout << "\t|\tActivity Management -> 4\t|" << endl;
        cout << "\t|\tCharges & Bill      -> 5\t|" << endl;
        cout << "\t|\tExit                -----> 6\t|" << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;
        Sleep(800);
        cout << "\n\n\t--GOOD-BYE!--" << endl;
        system("cls");
        flight.resetPrice();
        hotel.resetPrice();
        cabs.resetPrice();
        activity.resetPrice();
        displayPage();
    }
    else{
        cout << "Invalid Input! Redirecting to Previous Menu..." << endl;
        system("CLS");
        Menu();
    }
    
}
