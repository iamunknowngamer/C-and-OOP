/* Syed Saif ur Rehman Shah, 23k-0032 */

#include <iostream>
#include <string.h>
using namespace std;

class calender{
    public:
    int month=12;
    int days=31;
    string arr[12][31] = { {""} };
};

void addition(calender &data){
    int tempdays, tempmonth; string task;
    cout<<"Enter the month and day of the year where you want to add task: ";
    cin>>tempmonth>>tempdays;
    cout<<"Enter the task: "; cin>>task;
    data.arr[tempmonth][tempdays] = task;
}

void removetask(calender &data){
    int tempdays, tempmonth; string task;
    cout<<"Enter the month and day of the year where you want to remove task: ";
    cin>>tempmonth>>tempdays;
    cout<<"Task removed";
    data.arr[tempmonth][tempdays] = "";
}

void display(calender &data){
    cout<<"Displaying the tasks..."<<endl;
    for(int i=0; i<data.month; i++){
        for(int j=0; j<data.days; j++){
            if(!data.arr[i][j].empty()){
            cout<<j<<"/"<<i<<"/2024 - "<<data.arr[i][j]<<endl;
            }
        }
    }
}

int main(){
    calender data;
    int choice;
    do{
        cout<<"\n1.Add task\n2.Remove task\n3.Display tasks\n4.Exit"<<endl; cin>>choice;
        if(choice==1) addition(data);
        else if(choice==2) removetask(data);
        else if(choice==3) display(data);
        else{
            cout<< "Program Terminated."; exit;
        }
    }while (choice!=4);
}
