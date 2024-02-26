// Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
#include <thread>
using namespace std;

class table{
    int total_seats, occupied_seats, free_seats;
    bool clean;

    public:
    bool flag=false;
    table(void): total_seats(4), occupied_seats(0), free_seats(4), clean(true) {}
    table(int total_seats): occupied_seats(0), clean(true){
        if(total_seats!=4 && total_seats!=8){
            if(total_seats<4) total_seats=4;
                    else      total_seats=8;
        }
        free_seats=total_seats;
    }
    void table_usage(){
        if(clean){
            int size; cout<<"Members in the group are: "; cin>>size;
            if(size<=total_seats){
                cout<<"\nTable occupied";
                occupied_seats += size;
                free_seats -= size;
            } 
            else if(size>total_seats) cout<<"\nTable is available for group of "<<total_seats<<" people only.";
        } else cout<<"\nTable is dirty, can't be occupied.";
    }
    void have_lunch(){
        cout<<"\nThank you for dining here, please come again.";
        clean=false;
    }
    void leave(){
        cout<<"\nLeaving the table.";
        occupied_seats=0; free_seats=total_seats;
    }
    void clean_table(){
        if(occupied_seats==0) cout<<"\nCleaning the table.";
        else cout<<"\nTable is occupied, can't be cleaned.";
    }
    int getTotalSeats(){
        return total_seats;
    }
};

void OccupyTable(table Table[], int size){
    int assigned = 0;
    for(int i=0; i<5; i++){
        if(Table[i].getTotalSeats()>=size && !Table[i].flag){
            cout<<"Table "<<i+1<<" assigned to this group of "<<size<<" people, with "<<Table[i].getTotalSeats()<<" seats."<<endl;
            Table[i].getTotalSeats();
            Table[i].flag=true;
            assigned=i;
            break;
        }
    }
    if(assigned!=-1){
        Table[assigned].flag = true;
    }
}

void EmptyTable(table &Table){
    Table.leave();
    cout<<"....\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout<<"Table is now empty.";
}

int main(){
    table Table[5];
    Table[0] = Table[1] = table(8);
    Table[2] = Table[3] = Table[4] = table(4);
    
    cout<<"[Credits: Syed Saif ur Rehman Shah (23k-0032)]"<<endl<<endl;

    OccupyTable(Table, 4);
    OccupyTable(Table, 6);

    cout<<"\n\nTable usage function called: "<<endl;
    Table[0].table_usage();
    cout<<"\n\nTable lunch function called: "<<endl;
    Table[0].have_lunch();
    cout<<"\n\nTable leave function called: "<<endl;
    Table[0].leave();
    cout<<"\n\nTable clean function called: "<<endl;
    Table[0].clean_table();
    cout<<"\n\nEmptyTable function called: "<<endl;
    EmptyTable(Table[1]);
}
