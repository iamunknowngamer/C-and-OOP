#include<iostream>
using namespace std;

class Employee{
protected:
    int employeeID;
    string employeeName;
public:
    Employee(int employeeID,string employeeName){
        this->employeeID = employeeID;
        this->employeeName = employeeName;
    }
    virtual double calculatePay() const{return 0;}
    virtual void displayDetails() const{
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Employee Name: "<<employeeName<<endl;
    }
};
class FullTimeEmployee:public Employee{
    double monthlySalary;
public:
    FullTimeEmployee(double monthlySalary,int employeeID,string employeeName):Employee(employeeID,employeeName){
        this->monthlySalary = monthlySalary;
    }
    double calculatePay() const{
        return monthlySalary;
    }
    void displayDetails() const{
        Employee::displayDetails();
        cout<<"Monthly Salary: "<<monthlySalary<<endl;
    }
};
class PartTimeEmployee:public Employee{
    double wageHourley;
    int hours;
public:
    PartTimeEmployee(double wageHourley,int hours,int employeeID,string employeeName):Employee(employeeID,employeeName){
        this->wageHourley = wageHourley;
        this->hours = hours;
    }
    double calculatePay() const{
        return wageHourley*hours;
    }
    void displayDetails() const{
        Employee::displayDetails();
        cout<<"Hourly Wage: "<<wageHourley<<endl;
        cout<<"Hours: "<<hours<<endl;
    }
};
int main(){

    FullTimeEmployee full(50000, 123, "Ali");
    PartTimeEmployee part(500, 10, 321, "Murtaza");
    cout<<"Displaying Details: "<<endl<<endl;
    cout<<"Full Time Employee Details:"<<endl;
    full.displayDetails();

    cout<<"\nPart Time Employee Details:"<<endl;
    part.displayDetails();

    Employee* emp1 = &full;
    Employee* emp2 = &part;

    cout<<"\nCalculating Pay:"<<endl;
    cout<<"Full Time Employee - Calculated Pay: "<<emp1->calculatePay()<<endl;
    cout<<"Part Time Employee - Calculated Pay: "<<emp2->calculatePay()<<endl;

}
