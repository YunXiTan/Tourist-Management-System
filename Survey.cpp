#include"Survey.h"
#include"Menu.h"
#include<iostream>
using namespace std;

void Survey::checkStatus(Customer *customers, int numCustomers) {
    cout << "Before you enter the system ";
    cout << "you have to answer a survey to ensure you are in a safe condition\n";
    cout << endl;
    cout << "********************************************"<< endl;
    cout << "********      !!!Reminder!!!        ********"<< endl;
    cout << "* You are not allowed to give fake answers *"<< endl;
    cout << "********************************************"<< endl;
    int ans1, ans2, ans3, ans4, ans5;
    cout << "1-Yes 2-No\n";
    cout << "Are you live in a red zone area?   -> ";
    cin >> ans1;
    cout << "Have you been in contact with someone with Covid-19 within 7 days?   -> ";
    cin >> ans2;
    cout << "Do you have symptoms such as a sore throat, cough, fever, etc.?   -> ";
    cin >> ans3;
    cout << "Have you received two doses of the vaccine and a booster dose?    -> ";
    cin >> ans4;
    if ((ans1 == 2) && (ans2 == 2) && (ans3 == 2) && (ans4 == 1)) {
        for (int i = 0; i < numCustomers; i++) {
            customers[i].health_status = true;
        }
    }
    else {
        for (int i = 0; i < numCustomers; i++) {
            customers[i].health_status = false;
        }
    }
    if (customers[0].health_status == true) {
        cout << "\nYou are allowed to visit Breezy Island\n";
        cout << "Press 1 to enter the main menu......\n";
        cin >> gotoMenu;
        if (gotoMenu == 1) {
            system("cls");
            Menu();
        }
        else {
            system("cls");
            Menu();
        }
    }
    else {
        cout << "\nSorry, you are not allowed to visit Breezy Island\n";
        cout << "Press any key to exit the system......\n";
        cin >> gotoMenu;
        if (gotoMenu == 1) {
            exit(1);
        }
        else {
            exit(1);
        }
    }
}

// bool Survey::showStatus(Customer *customers, int numCustomers) {
//     for (int i = 0; i < numCustomers; i++) {
//         if (customers[i].health_status == true) {
//             return true;
//         }
//     }
//     return false;
// }
