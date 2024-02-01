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
    
    int choice;
    do{
    Student stud[1];
    
    cout<<"1.Add Data\n2.Display Data\n\n";
    cin>> choice;
    if (choice==1){
        for(int i=0; i<1 ; i++){
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
    else if( choice == 2){
        for(int j=0; j<1;j++){
                cout<<stud[j].course_id<<endl;
                cout<<stud[j].course_name<<endl;
                cout<<stud[j].student_id<<endl;
                cout<<stud[j].first_name<<endl;
                cout<<stud[j].last_name<<endl;
                cout<<stud[j].cell_no<<endl;
                cout<<stud[j].email<<endl;
            }
        }  
    }while(choice!=0);
}
