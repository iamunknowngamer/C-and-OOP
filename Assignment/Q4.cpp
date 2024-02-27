// Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
using namespace std;

class RollerCoaster{
    string coasterName;
    int coasterHeight;
    int coasterLength;
    int coasterSpeed;
    int coasterCapacity;
    int currentNumRiders;
    bool rideInProgress;

    public:
        RollerCoaster() : coasterName("Roller Coaster"), coasterHeight(500), coasterLength(2000), coasterSpeed(0), coasterCapacity(20), currentNumRiders(0), rideInProgress(false) {}
        RollerCoaster(string name, int height, int length, int speed, int capacity){
            this->coasterName = name;
            this->coasterHeight = height;
            this->coasterLength = length;
            this->coasterSpeed = speed;
            this->currentNumRiders;    
            if(capacity <= 3) capacity = 4; 
            else this->coasterCapacity = capacity;

            if(capacity % 2 != 0 && capacity % 3 != 0){
                int closestMultipleOfTwo = ((capacity + 1) / 2)*2;
                int closestMultipleOfThree = ((capacity + 2) / 3)*3;
                capacity = (closestMultipleOfTwo < closestMultipleOfThree) ? closestMultipleOfTwo : closestMultipleOfThree;
            }
            currentNumRiders = 0;
            rideInProgress = false;
        }

    string getName(){
        return coasterName;
    }
    int getHeight(){
        return coasterHeight;
    }
    int getLength(){
        return coasterLength;
    }
    int getSpeed(){
        return coasterSpeed;
    }
    int getCapacity(){
        return coasterCapacity;
    }
    int getCurrentNumRiders(){
        return currentNumRiders;
    }
    bool isRideInProgress(){
        return rideInProgress;
    }
    void setSpeed(int speed){
        this->coasterSpeed = speed;
    }
    int loadRiders(int numRiders){
        if(rideInProgress){
            return rideInProgress;
        }
        int availableSeats = coasterCapacity - currentNumRiders;   
        if(numRiders > availableSeats) return numRiders - availableSeats;
        currentNumRiders += numRiders;
        return 0;
    }
    int startRide(){
        if(rideInProgress){
            return -1;
        }
        if(currentNumRiders < coasterCapacity) return coasterCapacity - currentNumRiders;
        rideInProgress = true;
        return 0;
    }
    void stopRide(){
        rideInProgress = false;
    }
    void unloadRiders(){
        currentNumRiders = 0;
    }
    void accelerate(){
        int rollNumber = 0032; 
        int lastDigit = rollNumber / 10;
        coasterSpeed += lastDigit;
    }
    void decelerate(){
        int rollNumber = 0032;
        int lastDigit = rollNumber / 10;
        coasterSpeed = (lastDigit > coasterSpeed) ? 0 : coasterSpeed - lastDigit;
    }
};

int main(){

    RollerCoaster r1; 
    RollerCoaster r2("Thunder Bolt", 600, 2500, 80, 25); 
    cout<<"[Credits: Syed Saif ur Rehman Shah (23k-0032)]"<<endl<<endl;

    cout<<"Roller Coaster 1 Details:"<<endl;
    cout<<"Name: "<<r1.getName()<<endl;
    cout<<"Height: "<<r1.getHeight()<<" meters"<<endl;
    cout<<"Length: "<<r1.getLength()<<" meters"<<endl;
    cout<<"Speed: "<<r1.getSpeed()<<" km/h"<<endl;
    cout<<"Capacity: "<<r1.getCapacity()<<" people"<<endl;
    cout<<"Current Number of Riders: "<<r1.getCurrentNumRiders()<<endl;
    cout<<"Ride In Progress: "<<(r1.isRideInProgress() ? "Yes" : "No")<<endl;
    
    cout<<"\nRoller Coaster 2 Details:"<<endl;
    cout<<"Name: "<<r2.getName()<<endl;
    cout<<"Height: "<<r2.getHeight()<<" meters"<<endl;
    cout<<"Length: "<<r2.getLength()<<" meters"<<endl;
    cout<<"Speed: "<<r2.getSpeed()<<" km/h"<<endl;
    cout<<"Capacity: "<<r2.getCapacity()<<" people"<<endl;
    cout<<"Current Number of Riders: "<<r2.getCurrentNumRiders()<<endl;
    cout<<"Ride In Progress: "<<(r2.isRideInProgress() ? "Yes" : "No")<<endl;
 
    int result;
    cout<<"\nStarting Roller Coaster 1: "<<endl;
    result = r1.startRide();
    if(result == -1) cout<<"Ride is already in progress: "<<endl;
    else if(result > 0) cout<<"Ride 1 cannot start, "<<result<<" seats are still unoccupied!"<<endl;
    else cout<<"Ride 1 started successfully!"<<endl;

    cout<<"\nLoading Roller Coaster 2: "<<endl;
    int loadResult2 = r2.loadRiders(10);
    if(loadResult2 > 0) cout<<loadResult2<<"Riders were not seated due to insufficient space!"<<endl;
    else cout<<"All riders seated successfully!"<<endl;

    cout<<"\nAccelerating Roller Coaster 1: "<<endl;
    r1.accelerate();
    cout<<"New speed of Ride 1: "<<r1.getSpeed()<<" km/h"<<endl;
    
    cout<<"\nDecelerating Roller Coaster 2: "<<endl;
    r2.decelerate();
    cout<<"New speed of Ride 2: "<<r2.getSpeed()<<" km/h"<<endl;

    cout<<"\n\nProgram terminated."<<endl;
}

