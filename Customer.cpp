#include "Customer.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

bool Customer::checkGender(){
    bool status = true;
    if((customer_sex != 1)&&(customer_sex!=2)){
        status = false;
    }
    return status;
}

bool Customer::checkMobile(){
    bool status = true;
    if((customer_mobile.length()<11)&&(customer_mobile.length()>9)){
        for(int i=0; i<customer_mobile.length(); i++){
            if(!isdigit(customer_mobile[i])){
                status = false;
            }
        }
    }
    else{
        status = false;
    }
    return status;
}

bool Customer::checkIc(){
    bool status = true;
    if((customer_Ic.length()<13)&&(customer_Ic.length()>11)){
        for(int i=0; i<customer_Ic.length(); i++){
            if(!isdigit(customer_Ic[i])){
                status = false;
            }
        }
    }
    else{
        status = false;
    }
    return status;
}

void Customer::CustomerDetails(){
    cout << "-------------------------------------------------\n";
    cout << "Welcome to Breezy Island Travel Management System\n";
    cout << "-------------------------------------------------\n";
    cout << endl;

    cout << "-->  Please enter your personal information  <--\n";
    cout << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin,customer_name);
    do{
        cout << "Gender (1-Male 2-Female):";
        cin >> customer_sex;
        if(!checkGender()){
            cout << "\nInvalid format! Please follow the example format!\n";
        }
    }while(checkGender() == false);
    if(customer_sex == 1){
        customer_gender = "Male";
    }
    else{
        customer_gender = "Female";
    }
    cout << "Age: ";
    cin >> customer_age;
    do{
        cout << "Mobile Number (Exp: 0123456789): ";
        cin >> customer_mobile;
        if(!(checkMobile())){
        cout << "\nInvalid Mobile Number!\n";
    }
    }while(checkMobile() == false);
    do{
       cout << "IC (Exp: 991023015678 ): ";
       cin >> customer_Ic; 
       if(!(checkIc())){
        cout << "\nInvalid IC Number!\n";
       }
    }while(checkIc() == false);
    
    cout << "Email: ";
    cin >> customer_email;
    system("cls");
}

