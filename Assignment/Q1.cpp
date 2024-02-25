//Syed Saif ur Rehman Shah (23k-0032)

#include "iostream"
#include "vector"
using namespace std;

class Pet{
    string healthStatus;
    int hungerLevel;
    int happinessLevel;
    vector<string> specialSkills;

    public:

    bool feed;
    Pet(string healthStatus="Good", int hungerLevel=7, int happinessLevel=7, vector<string> specialSkills={""}):
    healthStatus(healthStatus), happinessLevel(happinessLevel), hungerLevel(hungerLevel)
    {
        int temp; cout<<"How many skills does the pet possess: "; cin>>temp;
        for(int i=0; i<temp; i++){
            string temp; cout<<"Enter the skill "<<i+1<<": ";
            specialSkills.push_back(temp);
            this->specialSkills = specialSkills;
        }
    }

    void displayPetDetails(){
        for(int i=0; i<3; i++){
            cout<<"\nDetails of Pet "<<i+1<<": "<<endl;
            cout<<"Health Status: "<<healthStatus<<endl;
            cout<<"Hunger Level: "<<hungerLevel<<endl;
            cout<<"Happiness Level: "<<happinessLevel<<endl;
            cout<<"Special Skills: ";
            for(int i=0; i<specialSkills.size(); i++){
                cout<<specialSkills[i]<<" ";
            }
        }
    }
    void updateHappiness(){
        if(happinessLevel>10) happinessLevel=10;
        else(happinessLevel<1); happinessLevel=1;
        if(happinessLevel!=10){
            if(feed){
                happinessLevel++;
                cout<<"Previous Happiness Level"<<happinessLevel--<<"\nUpdated Happiness Level"<<happinessLevel;
            } else(happinessLevel<10); cout<<"Previous Happiness Level"<<happinessLevel<<"\nUpdated Happiness Level"<<happinessLevel--;
        } else cout<<"The pet already haves the max happiness level "<<happinessLevel;
    }
    void updateHealth(){
        cout<<"Previous Health Status: "<<healthStatus;
        if(happinessLevel>=5 && hungerLevel<=7){
            healthStatus="Good";
            if(happinessLevel>=7 && hungerLevel<=5) healthStatus="Perfect";
        } else healthStatus="Sick";
        cout<<"\nUpdated Health Status: "<<healthStatus;
    }
    void updateHunger(){
        if(hungerLevel>10) hungerLevel=10;
        else(hungerLevel<1); hungerLevel=1;
        hungerLevel--; feed=true;
        cout<<"The pet was fed.\nPrevious Hunger Level"<<hungerLevel++<<"\nUpdated Hunger Level: "<<hungerLevel;
    }
};

class Adopter{
    string adopterName;
    string adopterMobileNum;
    vector<string> adoptedPetRecords;

    public:
    
    void adoptPet(){

    }
    void returnPet(){

    }
    void displayAdoptedPets(){

    }
};

int main(){
    Pet pet;
    Adopter adopt;
    string choice;
    do{
        cout<<"P1.Add details\nP2.Display\nP3.Feed\nP4.Update happiness\nP5.Update health"<<endl; cin>>choice;
        if(choice=="P1"){
            string health; int happiness, hunger;
            cout<<"Enter the Health Status(Perfect/Good/Sick): "; cin>>health;
            cout<<"Enter the Happiness Level(1-10): "; cin>>happiness;
            cout<<"Enter the Hunger Level(1-10): "; cin>>hunger;
            pet = Pet(health, happiness, hunger, {""});
        }
        else if(choice=="P2") pet.displayPetDetails();
        else if(choice=="P3") pet.updateHunger();
        else if(choice=="P4") pet.updateHappiness();
        else if(choice=="P5") pet.updateHealth();
    } while(choice!="");
}
