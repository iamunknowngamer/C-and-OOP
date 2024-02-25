//Syed Saif ur Rehman Shah (23k-0032)

#include "iostream"
#include "vector"
using namespace std;

class Pet{
    string name;
    string healthStatus;
    int hungerLevel;
    int happinessLevel;
    vector<string> specialSkills;

    public:

    bool feed;
    Pet(string name="Tom", string healthStatus="Good", int hungerLevel=7, int happinessLevel=7):
    healthStatus(healthStatus), happinessLevel(happinessLevel), hungerLevel(hungerLevel), name(name){}
    
    void setskills(){
        int temp; cout<<"How many skills does the pet possess: "; cin>>temp;
        for(int i=0; i<temp; i++){
            string temp; cout<<"Enter the skill "<<i+1<<": "; cin>>temp;
            specialSkills.push_back(temp);
        }
        this->specialSkills = specialSkills;
    }
    string getname(){
        return this->name;
    }
    string gethealth(){
        return this->healthStatus;
    }
    int gethunger(){
        return this->hungerLevel;
    }
    int gethappiness(){
        return this->happinessLevel;
    }
    string getskills(){
        string skills;
        for(int i=0; i<specialSkills.size(); i++){
            skills += specialSkills[i] + "\n-";
        }
        return skills;
    }   

    void displayPetDetails(int &count, int i){
        cout<<"\nDetails of Pet "<<i+1<<": "<<endl;
        cout<<"Pet Name: "<<name<<endl;
        cout<<"Health Status: "<<healthStatus<<endl;
        cout<<"Hunger Level: "<<hungerLevel<<endl;
        cout<<"Happiness Level: "<<happinessLevel<<endl;
        cout<<"Special Skills: "<<endl;
        for(int j=0; j<specialSkills.size(); j++){
            cout<<"-"<<specialSkills[j]<<endl;
        }
    }
    void updateHappiness(){
        if(happinessLevel>10) this->happinessLevel=10;
        else if(happinessLevel<1) this->happinessLevel=1;
        if(happinessLevel!=10){
            if(feed){
                this->happinessLevel=happinessLevel+1;
                cout<<"Previous Happiness Level: "<<happinessLevel-1<<"\nUpdated Happiness Level: "<<happinessLevel<<endl;
            } else cout<<"Previous Happiness Level: "<<happinessLevel<<"\nUpdated Happiness Level: "<<happinessLevel-1<<endl;
        } else cout<<"The pet already haves the max happiness level "<<happinessLevel<<endl;
    }   
    void updateHealth(){
            cout<<"Previous Health Status: "<<healthStatus;
        if(happinessLevel>=5 && hungerLevel<=7){
            healthStatus="Good";
            if(happinessLevel>=7 && hungerLevel<=5) healthStatus="Perfect";
        } else healthStatus="Sick";
            cout<<"\nUpdated Health Status: "<<healthStatus<<endl;
    }
    void updateHunger(){
        if(hungerLevel>10) this->hungerLevel=10;
        else if(hungerLevel<1) this->hungerLevel=1;
        else{
            this->hungerLevel=hungerLevel-1; feed=true;
            cout<<"The pet was fed.\nPrevious Hunger Level: "<<hungerLevel+1<<"\nUpdated Hunger Level: "<<hungerLevel<<endl;
        }
    }
};

class Adopter{
    string adopterName;
    string adopterMobileNum;
    vector<string> adoptedPetRecords;

    public:
    
    Adopter(string adopterName="Saif", string adopterMobileNum="0314-771414"):
    adopterName(adopterName), adopterMobileNum(adopterMobileNum){}

    void adoptPet(Pet pet[], int &count){
        string tempname; bool flag=false;
        cout<<"\nEnter the name of the pet: "; cin>>tempname;
        for(int j=0; j<count; j++){
            if(tempname==pet[j].getname()){
                adoptedPetRecords.push_back(tempname);
                cout<<"\nAdopted the pet "<<tempname<<" successfully"<<endl;
                flag=true;
            }
        }
        if(!flag) cout<<"\nPet named "<<tempname<<" not found"<<endl;
    }
    void returnPet(){
        string tempname; cout<<"\nEnter the name of the pet you want to return: "; cin>>tempname;
        for(int i=0; i<adoptedPetRecords.size(); i++){
            if(tempname==adoptedPetRecords[i]){
                adoptedPetRecords[i] = "";
                cout<<"\nAdopter's Name: "<<adopterName;
                cout<<"\nAdopter's Cell no: "<<adopterMobileNum;
                cout<<"\nPet returned successfully"<<endl;
            }
            else cout<<"\nNo such pet was found in the record of adopted pets, the pet can't be returned"<<endl;
        }
    }
    void displayAdoptedPets(Pet pet[], int &count){
        for(int i=0; i<adoptedPetRecords.size(); i++){
            for(int j=0; j<count; j++){
                if(adoptedPetRecords[i]==pet[j].getname()){
                    cout<<"\nDetails of Pet "<<i+1<<": "<<endl;
                    cout<<"Pet Name: "<<pet[j].getname()<<endl;
                    cout<<"Health Status: "<<pet[j].gethealth()<<endl;
                    cout<<"Hunger Level: "<<pet[j].gethunger()<<endl;
                    cout<<"Happiness Level: "<<pet[j].gethappiness()<<endl;
                    cout<<"Special Skills: "<<pet[j].getskills()<<endl;
                }
            }
        }
    }
};

int main(){
    Pet pet[5]; int count=1;
    Adopter adopt;
    string choice;
    do{
        cout<<"\nP1.Add details\nP2.Display\nP3.Feed\nP4.Update happiness\nP5.Update health"<<endl; 
        cout<<"A1.Adopt\nA2.Return\nA3.Display\nE1.Exit"<<endl; cin>>choice;
        if(choice=="P1"){
            string health, name; int happiness, hunger;
            cout<<"Enter the name of the pet: "; cin>>name;
            cout<<"Enter the Health Status(Perfect/Good/Sick): "; cin>>health;
            cout<<"Enter the Happiness Level(1-10): "; cin>>happiness;
            cout<<"Enter the Hunger Level(1-10): "; cin>>hunger;
            pet[count] = Pet(name, health, happiness, hunger);
            pet[count].setskills();
            count++;
        }
        else if(choice=="P2"){ 
            string tempname; cout<<"\nEnter the name of the pet: "; cin>>tempname;
            for(int i=0; i<count; i++){
                if(pet[i].getname()==tempname){
                    pet[i].displayPetDetails(count,i);
                }
            }
        }
        else if(choice=="P3"){ 
            string tempname; cout<<"\nEnter the name of the pet: "; cin>>tempname;
            for(int i=0; i<count; i++){
                if(pet[i].getname()==tempname){
                    pet[i].updateHunger();
                }
            }
        }
        else if(choice=="P4"){
            string tempname; cout<<"\nEnter the name of the pet: "; cin>>tempname;
            for(int i=0; i<count; i++){
                if(pet[i].getname()==tempname){
                    pet[i].updateHappiness();
                }
            }
        }
        else if(choice=="P5"){
            string tempname; cout<<"\nEnter the name of the pet: "; cin>>tempname;
            for(int i=0; i<count; i++){
                if(pet[i].getname()==tempname){
                    pet[i].updateHealth();
                }
            }
        }
        else if(choice=="A1"){
            string adoptername, number; cout<<"Enter the adopter's name: "; cin>>adoptername;
            cout<<"Enter the adopter's cell no: "; cin>>number;
            adopt = Adopter(adoptername,number);
            adopt.adoptPet(pet,count);
        }
        else if(choice=="A2") adopt.returnPet();
        else if(choice=="A3") adopt.displayAdoptedPets(pet,count);
        else if(choice=="E1") { cout<<"\nProgram Terminated."; exit (1);}
        else cout<<"Invalid Choice";
    } while(choice!="E1");
}
