#ifndef CABS_H
#define CABS_H
#include<iostream>
using namespace std;
class Cabs {
	private:
		
		int cabs_model;
		int seat;
		int cabs_choice;//-cabs_choice : int
		int cabs_amount;//- cabs_amount : int
		int cabs_day;//- cabs_day : int
		string car;
		string Car_model;
		// double cabs_price;//+ cabs_price : double
		double pre_price;
		double cabs_price;
		int confirmBook;
		int gotoMenu;
		// total price
	public:
	    static double cabs_totalp;
		void cabDetails();//+ cabDetails()
		void checkBooking();
		void resetPrice();
		friend ostream& operator<<(ostream&,Cabs);
};



#endif