#include <iostream>
using namespace std;

class shop{
    public:
    string item;
    float price;
};

void addition(shop data[], int &count){
    shop datainput;
    cout<<"\nEnter the item name: ";
    cin>>data[count].item;
    cout<<"\nEnter the price: ";
    cin>>data[count].price;
    count++;
    return;
}

void modify(shop data[], int count){
    string name;
    cout<<"\nEnter the name of the item to change its price: "; cin>>name;
    for(int i=0; i<count; i++){
        if(data[i].item == name){
            cout<<"\nEnter the new price: ";
            cin>>data[i].price;
        }
    }
}

void display(shop data[], int count){
    cout<<"Following is the list of available items: "<<endl;
    for(int i=0; i<count; i++){
        cout<<"Item "<<i+1<<endl;
        cout<<"Name: "<<data[i].item<<endl;
        cout<<"Price: "<<data[i].price<<endl;
    }
}

int main(){

    shop data[50];
    int count = 0;
    cout<<"Add data for shop: "<<endl;
    for(int i=0; i<2; i++){
        addition(data, count);
    }

    int choice;
    do{
        cout<<"1.Add items\n2.Modify the prices of items\n3.Display list of items\n4.Exit"<<endl;
        cin>>choice;
        if(choice==1){
            addition(data,count);
        }
        else if(choice==2){
            modify(data,count);
        }
        else if(choice==3){
            display(data,count);
        }
        else if(choice==4){
            cout<<"Program Terminated."<<endl;
            break;
        }
    }while(choice!=4);
    return 0;
}
