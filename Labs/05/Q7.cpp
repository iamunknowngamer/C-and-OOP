// Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Menu{

    public:
    string menu_items[15]={""};
    int price[15]={};
    int count=0;

    void defaultItem(){
        menu_items[0]="Nuggets";
        price[0]=37;
        count++;
    }
    void add_to_menu(){
        int temp; cout<<"\nHow many items you wish to add to the menu: "; cin>>temp;
        for(int i=count; i<temp+count; i++){
            cout<<"Enter the name of item "<<i+1<<": ";
            cin.ignore();
            getline(cin, menu_items[i]);
            cout<<"Enter its price: ";  
            cin>>price[i];    
        }
        count+=temp;
    }
    void remove_from_menu(){
        bool flag=false;
        string tempname; cout<<"\nEnter the name of the itme you wish to remove: "; cin>>tempname;
        for(int i=0; i<sizeof(menu_items)/sizeof(menu_items[0]); i++){
            if(menu_items[i]==tempname){
                menu_items[i]={""};
                price[i]={};
                cout<<"Item Removed."<<endl;
                flag=true;
                break;
            }
        }
        if(!flag) cout<<"No such item found in the menu."<<endl;
    }
    void display_menu(){
        cout<<"\n|---------------Menu---------------|"<<endl;
        cout<<left<<setw(25)<<"| Item"<<setw(25)<<"| Price   |"<<endl<<"|----------------------------------|"<<endl;
        for(int i=0; i<sizeof(menu_items)/sizeof(menu_items[0]); i++){
            if(menu_items[i]!=""){
                cout<<"| "<<setw(23)<<menu_items[i]<<"| "<<setw(8)<<price[i]<<"|"<<endl<<"|----------------------------------|"<<endl;
            }
        }
    }
    int get_size(){
        int size;
        size = sizeof(menu_items)/sizeof(menu_items[0]);
        return size;
    }
};

class Order{

    public:
    string orders[5];
    int quantity[5]={1};
    bool orderPlaced=false;

    void place_order(Menu menu){
        int temp; cout<<"\nHow many items you wish to order: "; cin>>temp;
        quantity[temp]={};
        for(int i=0; i<temp; i++){
            cout<<"Enter the name of item "<<i+1<<": ";
            cin>>orders[i];
            for(int j=0; j<menu.get_size(); j++){
                if(orders[i]==menu.menu_items[j]){
                    cout<<"How many "<<menu.menu_items[j]<<" you wish to order: "; cin>>quantity[i];
                }
            }
        }
        orderPlaced=true;
        cout<<"\nOrdered Successfully."<<endl;
    }
    int get_size(){
        int size;
        size = sizeof(orders)/sizeof(orders[0]);
        return size;
    }
};

class Payment{

    Menu menu;
    Order placed;
    public:

    void generate_receipt(Order placed, Menu menu){
        int Total=0;
        if(placed.orderPlaced==true){
            for(int i=0; i<placed.get_size(); i++){
                for(int j=0; j<menu.get_size(); j++){
                    if(placed.orders[i]==menu.menu_items[j]){
                        Total += menu.price[j]*placed.quantity[i];
                    }
                }
            }
        }
        cout<<"\nThe total bill is: "<<Total<<endl;
    }
};

int main(){
    Menu menu;
    Order order;
    Payment payment;

    menu.defaultItem();

    int choice;
    do{
        cout<<"\n1.Add items to menu\n2.Remove item from menu\n3.Display menu\n4.Order\n5.Generate bill\n6.Exit"<<endl;
        cout<<"Choose any of the options: ";
        cin>>choice;
        if(choice==1){
            menu.add_to_menu();
        }
        else if(choice==2){
            menu.remove_from_menu();
        }
        else if(choice==3){
            menu.display_menu();
        }
        else if(choice==4){
            order.place_order(menu);
        }
        else if(choice==5){
            payment.generate_receipt(order, menu);
        }
        else if(choice==6){
            cout<<"\nProgram Terminated."; exit(1);
        }
        else cout<<"\nInvalid Choice!"<<endl;
    }while(choice!=6);
}
