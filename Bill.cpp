#include"Bill.h"
#include"Menu.h"
//#include"PrintBill.h"
#include<iomanip>
#include<string>
#include<fstream>
#include<iostream>
using namespace std;

void Bill::showBill(){
    static int num = 1;
    bill_ID = "B22TM0000";
    if(num>0&&num<10){
        bill_ID.replace(8,1,to_string(num));
    }
    else if(num>10&&num<99){
        bill_ID.replace(7,2,to_string(num));
    }
    
    cout << "--------Breezy Island Travel Agency--------" << endl;
    cout << "-------------------Receipt-----------------" << endl;
    cout << "___________________________________________" << endl;

    cout << "Bill ID              : " << bill_ID << endl;
    cout << "Name                 : " << Customer::customer_name <<endl << endl;
    cout << "Description           \tTotal:" << endl;
    cout << "Flight cost          :\t" << fixed << setprecision(2) << Flight::flight_totalp << endl;
    cout << "Hotel cost           : \t" << fixed << setprecision(2) << Hotel::hotel_totalp << endl;
    cout << "Travel (cab) cost    :\t" << fixed << setprecision(2) << Cabs::cabs_totalp << endl;
    cout << "Activity cost        :\t" << fixed << setprecision(2) << Activity::activity_totalp << endl;
    
    cout << "_________________________________" << endl;
    cout << "Total Charge:         \t" << fixed << setprecision(2) << Flight::flight_totalp + Hotel::hotel_totalp + Cabs::cabs_totalp + Activity::activity_totalp << endl;
    cout << "_________________________________" << endl;
    cout << "------------THANK YOU------------" << endl<< endl;
    num++;
    cout << "1 - Go back to main menu \n2 - Print Bill" << endl;
    cout << "--------------------------------------------\n";
    do{
       cout << "Selection: ";
       cin >> gotoMenu; 
       if((gotoMenu<1)||(gotoMenu>2)){
        cout << "Invalid Selection!!!\n";
       }
    }while((gotoMenu<1)||(gotoMenu>2));

    if(gotoMenu==1){
        system("cls");
        Menu();
    }
    else if(gotoMenu==2){
        printBill();
        cout << "Your receipt is successfully printed !"<<endl;
        cout << "Press 1 to go back to main menu..... " << endl;
        cin >> gotoMenu;
        if (gotoMenu==1){
            system("cls");
            Menu();
        }       
    }
    else{
        system("cls");
        Menu();
    }

}

void Bill::printBill(){
    static int num = 1;
    bill_ID = "B22TM0000";
    if(num>0&&num<10){
        bill_ID.replace(8,1,to_string(num));
    }
    else if(num>10&&num<99){
        bill_ID.replace(7,2,to_string(num));
    }
    ofstream outf;
    string id = to_string(num);
    string file = "receipt"+id+".txt";
    outf.open(file); //receipt for bought items
    
    outf << "--------Breezy Island Travel Agency--------" << endl;
    outf << "-------------Receipt-------------" << endl;
    outf << "_________________________________" << endl;

    outf << "Bill ID: " << bill_ID << endl;
    outf << "Name: " << Customer::customer_name << endl << endl;

    outf << "Description\t\t\t Total" << endl;
    outf << "Flight cost:\t\t " << fixed << setprecision(2) << Flight::flight_totalp << endl;
    outf << "Hotel cost:\t\t\t" << fixed << setprecision(2) << Hotel::hotel_totalp << endl;
    outf << "Travel (cab) cost:\t " << fixed << setprecision(2) << Cabs::cabs_totalp << endl;
    outf << "Activity cost:\t " << fixed << setprecision(2) << Activity::activity_totalp << endl;

    outf << "_________________________________" << endl;
    outf << "Total Charge:\t\t " << fixed << setprecision(2) << Flight::flight_totalp + Hotel::hotel_totalp + Cabs::cabs_totalp + Activity::activity_totalp<< endl;
    outf << "_________________________________" << endl;
    outf << "------------THANK YOU------------" << endl;
    
    outf.close();
}