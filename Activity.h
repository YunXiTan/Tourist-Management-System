#ifndef ACTIVITY_H
#define ACTIVITY_H
#include<iostream>
using namespace std;


class Activity {
    private:
        int activity_choice;//-activity_choice : int
        int activity_amount;//- activity_amount : int
        string activity;
        int person;
        string times;
        int time;
        int confirmBook;
        int gotoMenu;
        double pre_price;
		double activity_price;
        // double ACTotal_Price;
    public:
        static double activity_totalp;
        void activityDetails();//+ activityDetails()
        // void customerinformation();
        //void showact();
        string gettime(int a);
       // Activity operator+(const Activity& otherActivity);
       	void checkBooking();
        void resetPrice();
		friend ostream& operator<<(ostream&,Activity);
};

#endif