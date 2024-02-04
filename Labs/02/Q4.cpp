/* 
Name: Syed Saif ur Rehman Shah
Roll number: 23k-0032
*/

#include <iostream>
using namespace std;

struct Register{
    int course_id;
    string course_name;
};

struct Student : Register {
    int student_id;
    string first_name;
    string last_name;
    int cell_no;
    string email;
};

int main(){
    int n=2;
    Student stud[n];
    
    int choice;
    do{
    cout<<"\n\n1.Add Data\n2.Display Data\n3.Exit\n\n";
    cin>> choice;
    if (choice==1){
        for(int i=0; i<n ; i++){
            cout<<"\nDetails for student "<<i+1<<":\n";
            cout<<"Enter the Course ID: ";
            cin>>stud[i].course_id;
            cout<<"\nEnter the Course Name: ";
            cin>>stud[i].course_name;
            cout<<"\nEnter the Student ID: ";
            cin>>stud[i].student_id;
            cout<<"\nEnter your first name: ";
            cin>>stud[i].first_name;
            cout<<"\nEnter your last name: ";
            cin>>stud[i].last_name;
            cout<<"\nCell Number: ";
            cin>>stud[i].cell_no;
            cout<<"\nEnter your email: ";
            cin>>stud[i].email;
        }
    }
    else if(choice == 2){
        for(int i=0; i<n;i++){
                cout<<"\nData of student "<<i+1<<":\n";
                cout<<"Course ID: "<<stud[i].course_id<<endl;
                cout<<"Course Name: "<<stud[i].course_name<<endl;
                cout<<"Student ID: "<<stud[i].student_id<<endl;
                cout<<"First Name: "<<stud[i].first_name<<endl;
                cout<<"Last Name: "<<stud[i].last_name<<endl;
                cout<<"Cell Phone: "<<stud[i].cell_no<<endl;
                cout<<"Email: "<<stud[i].email<<endl;
            }
        }
    else{
        cout << "Program terminated.";
        exit;}
    }while(choice!=3);
}
