#include "InitalPage.h"
#include "Customer.h"
#include "Survey.h"
#include <iostream>
using namespace std;

void InitialPage::displayPage(){
    cout << "No: " << no_customer+1;
    cout << "\n\n\n\n\t\tWelcome to Breezy Island Management System\n\t\t";
    system("pause");
    system("cls");
    no_customer++;
    // const int MAX_CUSTOMERS = 100; 
    // Customer customers[MAX_CUSTOMERS]; 
    customers[no_customer].CustomerDetails();

    // Survey survey;
    survey.checkStatus(customers, no_customer);
    //cout << survey.showStatus(customers, no_customer) << endl;
}

int InitialPage::no_customer=0;