/* Syed Saif ur Rehman Shah (23k-0032) */

#include <iostream>
using namespace std;

class WeekDays{
    string days[7];
    int CurrentDay;
    
    public:
    WeekDays(void){
        days[0] = "Sunday";
        days[1] = "Monday";
        days[2] = "Tuesday";
        days[3] = "Wednesday";
        days[4] = "Thursday";
        days[5] = "Friday";
        days[6] = "Saturday";
    }
    WeekDays(int day): CurrentDay(day){
        if(CurrentDay>6) CurrentDay %= CurrentDay;
    }
    void getCurrentDay(){
        cout<<"\ncurrent day: "<<days[CurrentDay];
    }
    void getNextDay(){
        if(CurrentDay++ > 6) cout<<"\ncurrent day: "<<days[0];
        else cout<<"\ncurrent day: "<<days[CurrentDay];
    }
    void getPreviousDay(){
        if(CurrentDay-1 < 0) cout<<"\ncurrent day: "<<days[6];
        else cout<<"\ncurrent day: "<<days[CurrentDay];
    }
    void getNthDayFromToday(){
        int n=3; CurrentDay += n;
        if(CurrentDay>6) CurrentDay %= CurrentDay;
        cout<<"\ncurrent day: "<<days[CurrentDay];
    }
};

int main(){
    WeekDays d1(5);
    d1.getCurrentDay();
    d1.getNextDay();
    d1.getPreviousDay();
    d1.getNthDayFromToday();
}
