#include"Hotel.h"
#include"Menu.h"
#include<iostream>
using namespace std;

void Hotel::hotelDetails(){
    cout << "Welecome to Hotel Booking Management\n";
    cout << "Please select the hotel\n";
    cout << "-------------------------------------------\n";
    cout << "1. Hotel Agate\n";
    cout << "2. Hotel Blue\n";
    cout << "3. Hotel Carlton\n";
    cout << "4. Back to Main Menu\n";
    cout << "-------------------------------------------\n";
    do{
        cout << "Selection: ";
        cin >> hotel_choice;
        if((hotel_choice<1)||(hotel_choice>4)){
            cout << "Invalid Selection!!!\n";
        }
    }while((hotel_choice<1)||(hotel_choice>4));
    if(hotel_choice==1){
        hotel = "Hotel Agate";
    }
    else if(hotel_choice==2){
        hotel = "Hotel Blue";
    }
    else if (hotel_choice==3){
        hotel = "Hotel Carlton";
    }
    else
    {
        system("cls");
        Menu();
    }
        
    system("cls");
    if(hotel_choice==1){
        cout << "Welecome to Hotel Agate Booking Management\n";
        cout << "Please select the package\n";
        cout << "-------------------------------------------\n";
        cout << "1. Standard Pack\n";
        cout << "2. Premium Pack\n";
        cout << "3. Luxury Pack\n";
        cout << "-------------------------------------------\n";
        do{
            cout << "Selection: ";
            cin >> hotel_package;
            if((hotel_package<1)||(hotel_package>3)){
                cout << "Invalid Selection!!!\n";
            }
        }while((hotel_package<1)||(hotel_package>3));
        if(hotel_package==1){
            package = "Standard Pack";  
            hotel_price = 80;
        }
        else if(hotel_package==2){
            package = "Premium Pack";
            hotel_price = 120;
        }
        else{
            package = "Luxury Pack";
            hotel_price = 160;
        }
    }
    else if(hotel_choice==2){
        cout << "Welecome to Hotel Blue Booking Management\n";
        cout << "Please select the package\n";
        cout << "-------------------------------------------\n";
        cout << "1. Family Pack\n";
        cout << "2. Couple Pack\n";
        cout << "3. Single Pack\n";
        cout << "-------------------------------------------\n";
        do{
            cout << "Selection: ";
            cin >> hotel_package;
            if((hotel_package<1)||(hotel_package>3)){
                cout << "Invalid Selection!!!\n";
            }
        }while((hotel_package<1)||(hotel_package>3));
        if(hotel_package==1){
            package = "Family Pack";
            hotel_price = 240;
        }
        else if(hotel_package==2){
            package = "Couple Pack";
            hotel_price = 200;
        }
        else{
            package = "Single Pack";
            hotel_price = 160;
        }
    }
    else{
        cout << "Welecome to Hotel Carlton Booking Management\n";
        cout << "Please select the package\n";
        cout << "-------------------------------------------\n";
        cout << "1. Normal Pack\n";
        cout << "2. Special Pack\n";
        cout << "-------------------------------------------\n";
        do{
            cout << "Selection: ";
            cin >> hotel_package;
            if((hotel_package<1)||(hotel_package>2)){
                cout << "Invalid Selection!!!\n";
            }
        }while((hotel_package<1)||(hotel_package>2));
        if(hotel_package==1){
            package = "Normal Pack";
            hotel_price = 100;
        }
        else{
            package = "SpecialPack";
            hotel_price = 200;
        }
    }
    cout << "\n\nHow many packages you want to book?\n";
    cin >> hotel_amount;
    hotel_price*=hotel_amount;
    system("cls");
    // cout << "Hotel Details\n";
    // cout << "-------------------------------------------\n";
    // cout << "Hotel: " << hotel << endl;
    // cout << "Package: " << package << endl;
    // cout << "Amount: " << hotel_amount << endl;
    // cout << "Total Price: " << hotel_price << endl;
    // cout << "\nPress 1 to confirm the booking\nPress 2 to book another hotel\n->";
    // cin >> confirmBook;
    // if(confirmBook==1){
    //     cout << "Booking done\n";
    //     cout << "Press 1 to go back to menu\n";
    //     cin >> gotoMenu;
    //     if(gotoMenu==1){
    //         system("cls");
    //         Menu();
    //     }
    //     else{
    //         system("cls");
    //         Menu();
    //     }
    // }
    // else if(confirmBook==2){
    //     system("cls");
    //     hotelDetails();
    // }
    // else{
        
    //     system("cls");
    //     Menu();
    // } 
}

void Hotel::resetPrice(){
    hotel_totalp = 0;
}

ostream& operator<<(ostream &strm,Hotel h){
    strm << "Hotel Details\n";
    strm << "-------------------------------------------\n";
    strm << "Hotel: " << h.hotel << endl;
    strm << "Package: " << h.package << endl;
    strm << "Amount: " << h.hotel_amount << endl;
    strm << "Total Price: " << h.hotel_price << endl;
    return strm;
}

void Hotel::checkBooking(){
    cout << "\nPress 1 to confirm the booking\nPress 2 to book another hotel\n->";
    cin >> confirmBook;
    if(confirmBook==1){
        pre_price += hotel_price;
        hotel_totalp += pre_price;
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
    }
    else{
        system("cls");
        Menu();
    }
}

// Hotel Hotel::operator+(const Hotel& otherHotel) 
// {
//     Hotel result;

//     result.hotel_choice = hotel_choice + otherHotel.hotel_choice;
//     result.hotel_package = hotel_package + otherHotel.hotel_package;
//     result.hotel_amount = hotel_amount + otherHotel.hotel_amount;
    
//     result.hotel_price = hotel_price + otherHotel.hotel_price;

//     return result;
// }
