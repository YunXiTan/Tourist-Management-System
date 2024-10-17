#include"Flight.h"
#include"Menu.h"
#include<iostream>
using namespace std;

void Flight::flightDetails(){
    cout << "Welcome to Flight Booking Management\n";
    cout << "Please select the departure airport\n";
    cout << "-------------------------------------------\n";
    cout << "1. Kuala Lumpur International Airport (KLIA)\n";
    cout << "2. Melaka International Airport\n";
    cout << "3. Penang International Airport\n";
    cout << "4. Langkawi International Airport\n";
    cout << "5. Kuching International Airport\n";
    cout << "6. Senai International Airport\n";
    cout << "7. Miri Airport\n";
    cout << "8. Back to Main Menu\n";
    cout << "--------------------------------------------\n";
    do{
       cout << "Selection: ";
       cin >> airport_choice; 
       if((airport_choice<1)||(airport_choice>8)){
        cout << "Invalid Selection!!!\n";
       }
    }while((airport_choice<1)||(airport_choice>8));
    switch (airport_choice)
    {
    case 1: airport = "Kuala Lumpur International Airport (KLIA)";
            break;
    case 2: airport = "Melaka International Airport";
            break;
    case 3: airport = "Penang International Airport";
            break;
    case 4: airport = "Langkawi International Airport";
            break;
    case 5: airport = "Kuching International Airport";
            break;
    case 6: airport = "Senai International Airport";
            break;
    case 7: airport = "Miri Airport";
            break;     
    case 8: system("cls");
            Menu();
            break;                    
    default:
        break;
    }
    system("cls");
    cout << "Welcome to flight booking\n";
    cout << "Please select the airline\n";
    cout << "-------------------------------------------\n";
    cout << "1. AirAsia\n";
    cout << "2. Malaysia Airlines\n";
    cout << "-------------------------------------------\n";
    do{
        cout << "Selection: ";
        cin >> airline_choice;
        if((airline_choice<1)||(airline_choice>2)){
            cout << "Invalid Selection!!!\n";
        }
    }while((airline_choice<1)||(airline_choice>2));
    if(airline_choice==1){
        airline = "AirAsia";
    }
    else{
        airline = "Malaysia Airlines";
    }
    system("cls");
    cout << "Welcome to flight booking\n";
    cout << "Please select the travel class\n"; 
    cout << "-------------------------------------------\n";
    cout << "1. First Class\n";
    cout << "2. Business Class\n";
    cout << "3. Economy Class\n";
    cout << "-------------------------------------------\n";
    do{
        cout << "Selection: ";
        cin >> travel_class_choice;
        if((travel_class_choice<1)||(travel_class_choice>3)){
            cout << "Invalid Selection!!!\n";
        }
    }while((travel_class_choice<1)||(travel_class_choice>3));
    if(travel_class_choice==1){
        FirstClass fc;
        travelClass = &fc;
        travel_class = "First Class";
    }
    else if(travel_class_choice==2){
        BusinessClass bc;
        travelClass = &bc;
        travel_class = "Business Class";
    }
    else{
        EconomyClass ec;
        travelClass = &ec;
        travel_class = "Economy Class";
    }
    flight_price = travelClass->getPrice();
    cout << "\n\nHow many ticket you want to book?\n";
    cin >> flight_amount;
    system("cls");
    calPrice();
    flight_price *= flight_amount;
//     cout << "FlightDetails\n";
//     cout << "-------------------------------------------\n";
//     cout << "Airport: " << airport << endl;
//     cout << "Airline: " << airline << endl;
//     cout << "Travel Class: " << travel_class << endl;
//     cout << "Amount of ticket: " << flight_amount << endl;
//     cout << "Total Price: " << flight_price << endl;
//     cout << "\nPress 1 to confirm the booking\nPress 2 to book another flight\n->";
//     cin >> confirmBook;
//     if(confirmBook==1){
//         cout << "Booking done\n";
//         cout << "Press 1 to go back to menu\n";
//         cin >> gotoMenu;
//         if(gotoMenu==1){
//             system("cls");
//             Menu();
//         }
//         else{
//             system("cls");
//             Menu();
//         }
//     }
//     else if(confirmBook==2){
//         system("cls");
//         flightDetails();
//     }
//     else{
//         system("cls");
//         Menu();
//     }
    
}

void Flight::calPrice(){
    if((airline_choice==1)&&(travel_class_choice==1)){  // airline + first class (rm 200)
        switch(airport_choice){
            case 1: flight_price += 40;
                    break;
            case 2: flight_price += 50;
                    break;
            case 3: flight_price += 30;
                    break;        
            case 4: flight_price += 50;
                    break;
            case 5: flight_price += 40;
                    break;
            case 6: flight_price += 25;
                    break;
            case 7: flight_price += 45;
                    break; 
        }                       
    }
    else if((airline_choice==1)&&(travel_class_choice==2)){  // airline + business class (rm 150)
        switch(airport_choice){
            case 1: flight_price += 40;
                    break;
            case 2: flight_price += 35;
                    break;
            case 3: flight_price += 10;
                    break;        
            case 4: flight_price += 30;
                    break;
            case 5: flight_price += 25;
                    break;
            case 6: flight_price += 30;
                    break;
            case 7: flight_price += 20;
                    break; 
        }                       
    }
    else if((airline_choice==1)&&(travel_class_choice==3)){ // airline + economic class (rm 100)
        switch(airport_choice){
            case 1: flight_price += 30;
                    break;
            case 2: flight_price += 100;
                    break;
            case 3: flight_price = 100;
                    break;        
            case 4: flight_price = 100;
                    break;
            case 5: flight_price = 100;
                    break;
            case 6: flight_price = 100;
                    break;
            case 7: flight_price = 100;
                    break; 
        }                       
    }
    else if((airline_choice==2)&&(travel_class_choice==1)){  // airasia + first class (rm 180)
        switch(airport_choice){
            case 1: flight_price += 40;
                    break;
            case 2: flight_price += 50;
                    break;
            case 3: flight_price += 30;
                    break;        
            case 4: flight_price += 50;
                    break;
            case 5: flight_price += 40;
                    break;
            case 6: flight_price += 25;
                    break;
            case 7: flight_price += 45;
                    break;  
        }                       
    }
    else if((airline_choice==2)&&(travel_class_choice==2)){ // airasia + business class (rm 150)
        switch(airport_choice){
            case 1: flight_price += 40;
                    break;
            case 2: flight_price += 50;
                    break;
            case 3: flight_price += 30;
                    break;        
            case 4: flight_price += 50;
                    break;
            case 5: flight_price += 40;
                    break;
            case 6: flight_price += 25;
                    break;
            case 7: flight_price += 45;
                    break; 
        }                       
    }
    else{
        switch(airport_choice){                 // airasia + economic class (rm 120) 
            case 1: flight_price += 40;
                    break;
            case 2: flight_price += 50;
                    break;
            case 3: flight_price += 30;
                    break;        
            case 4: flight_price += 50;
                    break;
            case 5: flight_price += 40;
                    break;
            case 6: flight_price += 25;
                    break;
            case 7: flight_price += 45;
                    break; 
        }                       
    }
}

void Flight::resetPrice(){
    flight_totalp = 0;
}

ostream& operator<<(ostream &strm,Flight f){
    strm << "FlightDetails\n";
    strm << "-------------------------------------------\n";
    strm << "Airport: " << f.airport << endl;
    strm << "Airline: " << f.airline << endl;
    strm << "Travel Class: " << f.travel_class << endl;
    strm << "Amount of ticket: " << f.flight_amount << endl;
    strm << "Total Price: " << f.flight_price << endl;
    return strm;
}

void Flight::checkBooking(){
    cout << "\nPress 1 to confirm the booking\nPress 2 to book another flight\n->";
    cin >> confirmBook;
    if(confirmBook==1){
        pre_price += flight_price;
        flight_totalp += pre_price;
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



// Flight Flight::operator +(const Flight& otherFlight) 
// {
//     Flight result;

//     result.airport_choice = airport_choice + otherFlight.airport_choice;
//     result.airline_choice = airline_choice + otherFlight.airline_choice;
//     result.travel_class_choice = travel_class_choice + otherFlight.travel_class_choice;

//     result.flight_price = flight_price + otherFlight.flight_price;

//     return result;
// }