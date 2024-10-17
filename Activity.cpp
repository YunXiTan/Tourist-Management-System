#include"Activity.h"
#include"Menu.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// Activity Activity::operator +(const Activity& otherActivity)
// {
//     Activity result;
//     result.activity_choice = activity_choice + otherActivity.activity_choice;
//     result.person = person + otherActivity.person;


//     result.activity_price = activity_price + otherActivity.activity_price;

//     return result;
// }

string Activity::gettime(int a){
    cout << "Welecome to Activity Booking Management\n";
    cout << "Please select the time you want\n";
    cout << "-------------------------------------------\n";
    cout << "1. 09:00 am - 11:00 am\n";
    cout << "2. 13:00 pm - 15.00 pm\n";
    cout << "3. 15.00 pm - 17.00 pm\n";
    cout << "-------------------------------------------\n";
    do{
        cout << "Selection: ";
        cin >> time;
        if((time<1)||(time>3)){
             cout << "Invalid Selection!!!\n";
         }
     }
     while((time<1)||(time>3));
     if(time==1){
        times = "09:00 am - 11:00 am"; 
        return times; 
    }
    else if(time==2){
        times = "13:00 pm - 15.00 pm";
        return times;

    }
    else{
        times = "15.00 pm - 17.00 pm";
        return times;
    }
}


// void Activity::showact() {
//     cout << "ActivityDetails\n";
//     cout << "-------------------------------------------\n";
//     cout << "Activity:    " << activity<< endl;
//     cout << "time:        " << times << endl;
//     cout << "Person no:   " << person << endl;
//     activity_price *= person;
//     cout << "Total Price: " << activity_price << "RM" << endl;
//     cout << "-------------------------------------------\n";

// }
// void Activity::customerinformation(){

//     cout << "Please select what time you want to play:" << endl;
//     cout << "1 - 9:00 am - 11:00 am \t2 - 13:00 pm -15.00 pm \t3 - 15.00 pm - 17.00 pm"<< endl;
//     cin >> time;
//     cout << "How many person :";
//     cin >> person;
// }

void Activity::activityDetails() {
        cout << "Welcome to Activity Booking Management\n";
        cout << "Please select the Activity\n";
        cout << "-------------------------------------------\n";
        cout << "1. Snorkeling\n";
        cout << "2. Sailing\n";
        cout << "3. Boat tour\n";
        cout << "4. Paddleboarding\n";
        cout << "5. Jet skiing\n";
        cout << "6. Sea turtle nesting & hatching\n";
        cout << "--------------------------------------------\n";
        do {
            cout << "Selection: ";
            cin >> activity_choice;
            if ((activity_choice < 1) || (activity_choice > 6)) {
                cout << "Invalid Selection!!!\n";
            }
        } while ((activity_choice < 1) || (activity_choice > 6));
            if(activity_choice==1){
            activity = "Snorkeling";
            activity_price = 100;
        }
        else if(activity_choice==2){
            activity = "Sailing";
            activity_price = 120;
        }
        else if (activity_choice==3){
            activity = "Boat tour";
            activity_price = 80;
        }
        else if (activity_choice==4){
            activity = "Paddleboarding";
        }
        else if (activity_choice==5){
            activity = "Jet skiing";
            activity_price = 50;
        }
        else if (activity_choice==6){
            activity = "Sea turtle nesting & hatching";
            activity_price = 200;
        }
        else
        {
            system("cls");
            Menu();
        }
        system("cls");
        gettime(activity_choice);
        cout << "\n\nHow many people of you? \t";
        cin >> person;
        system("cls");
        activity_price *= person;
        
        // cout << "\nPress 1 to confirm the booking\nPress 2 to book another activity\n->";
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
        //     activityDetails();
        // }
        // else{
            
        //     system("cls");
        //     Menu();
        // } 
    }

void Activity::checkBooking(){
    cout << "\nPress 1 to confirm the booking\nPress 2 to book another activity\n->";
    cin >> confirmBook;
    pre_price  = activity_price;
    activity_totalp += pre_price;
    if(confirmBook==1){
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

void Activity::resetPrice(){
    activity_totalp = 0;
}

ostream& operator<<(ostream& strm, Activity a){
    strm << "ActivityDetails\n";
    strm << "-------------------------------------------\n";
    strm << "Activity:    " << a.activity<< endl;
    strm << "time:        " << a.times << endl;
    strm << "Person no:   " << a.person << endl;
    strm << "Total Price: " << "RM" << a.activity_price << endl;
    strm << "-------------------------------------------\n";
    return strm;
}

