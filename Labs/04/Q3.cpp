/* Syed Saif ur Rehman Shah (23k-0032) */

#include <iostream>
using namespace std;

class WeekDays{
    string days[7];
    int CurrentDay;
    
    public:
    void initialize(string days[7]){
        days[0] = "Sunday";
        days[1] = "Monday";
        days[2] = "Tuesday";
        days[3] = "Wednesday";
        days[4] = "Thursday";
        days[5] = "Friday";
        days[6] = "Saturday";
    }
    WeekDays(void){
        initialize(days);
        CurrentDay=0;
    }
    WeekDays(int day): CurrentDay(day){
        if(CurrentDay>6) this->CurrentDay %= CurrentDay;
        initialize(days);
    }
    void getCurrentDay(){
        cout<<"\nCurrent day: "<<days[CurrentDay];
    }
    void getNextDay(){
        if(CurrentDay+1 > 6) cout<<"\nNext day: "<<days[0];
        else cout<<"\nNext day: "<<days[CurrentDay+1];
    }
    void getPreviousDay(){
        if(CurrentDay-1 < 0) cout<<"\nPrevious day: "<<days[6];
        else cout<<"\nPrevious day: "<<days[CurrentDay-1];
    }
    void getNthDayFromToday(){
        int n=3; CurrentDay+=n;
        if(CurrentDay>6) CurrentDay = CurrentDay%7;
        cout<<endl<<n<<" days from current day: "<<days[CurrentDay];
    }
};

int main(){
    WeekDays d1(5);
    d1.getCurrentDay();
    d1.getNextDay();
    d1.getPreviousDay();
    d1.getNthDayFromToday();
}
