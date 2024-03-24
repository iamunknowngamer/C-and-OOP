#include<iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    Person(const string &name, const int &age): name(name), age(age){}

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student: virtual public Person{
protected:
    int studentId;
    int gradeLevel;

public:
    Student(const string &name, const int &age,const int &studentId, const int &gradeLevel):Person(name,age),studentId(studentId),gradeLevel(gradeLevel){}

    void display(){
        Person::display();
        cout<<"Student ID: "<<studentId<<endl;
        cout<<"Grade Level: "<<gradeLevel<<endl;
    }
};

class Teacher: virtual public Person{
protected:
    string subject;
    int room;

public:
    Teacher(const string &name, const int &age,const string &subject,const int &room):Person(name,age),subject(subject),room(room){}

    void display(){
        Person::display();
        cout<<"Subject: "<<subject<<endl;
        cout<<"Room: "<<room<<endl;
    }
};

class GraduateStudent : public Student, public Teacher{
public:
    GraduateStudent(const string &name, const int &age, const int &studentId, const int &gradeLevel, const string &subject, const int &room)
        : Person(name, age), Student(name, age, studentId, gradeLevel), Teacher(name, age, subject, room) {}

    void display(){
        cout<<"---Person Display---"<<endl;
        Person::display();
        cout<<"---Student Display---"<<endl;
        Student::display();
        cout<<"---Teacher Display---"<<endl;
        Teacher::display();
    }
};

int main(){
    GraduateStudent gradStudent("Saif", 17, 230032, 13, "OOP", 101);
    gradStudent.display();

    return 0;
}
