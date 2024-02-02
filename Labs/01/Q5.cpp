#include <iostream>
using namespace std;

void input(string **file, int n, int i){
    cout<<"\nEnter the name of the event: ";
    cin>> file[i][0];
    cout<<"\nEnter the date(DD/MM/YY) for the event: ";
    cin>> file[i][1];
    cout<<"\nEnter the venue for the event: ";
    cin>> file[i][2];
    cout<<"\nEnter the name of the event organizer: ";
    cin>> file[i][3];
}

void display(string **file, int n){
    for(int i=0; i<n; i++){
        cout<<"\n\nDetails of event "<<i+1<<":\n";
        cout<< "Event name: "<<file[i][0]<<endl;
        cout<< "Event date: "<<file[i][1]<<endl;
        cout<< "Event venue: "<<file[i][2]<<endl;
        cout<< "Event organizer: "<<file[i][3]<<endl;
    }   
}

void search(string **file, int n){
    string date; bool flag = false;
    cout<<"Enter the date you want to search for: "; cin>>date;
    for(int i=0; i<n; i++){
        if(file[i][1] == date){
            cout<<"\n\nSimilar event to the date you provided: \n\n"; flag = true;
            cout<< "Event name: "<<file[i][0]<<endl;
            cout<< "Event date: "<<file[i][1]<<endl;
            cout<< "Event venue: "<<file[i][2]<<endl;
            cout<< "Event organizer: "<<file[i][3]<<endl;
        }
    }
    if(!flag) cout<<"No events found for the given date.";
    return;
}

int main(int n){
    cout<<"Enter the numbers of events: ";
    cin>>n;
    
    string **file = new string*[n];
    for(int i=0; i<n; i++){
        file[i] = new string[4];
    }
    for(int i=0; i<n; i++){
        cout<<"\n\nInput details for event "<< i+1<< ":";
        input(file,n,i);
    }
    int choice;
    do{
        cout<<"\n\n1.Display the event details\n2.Search event by date\n3.Exit\n";
        cin>>choice;
        if(choice==1) display(file,n);
        else if(choice==2) search(file,n);
        else if(choice=3){
            cout<<"Program terminated.";
            exit;
        }
    }while(choice!=3);
    
    return 0;
}

