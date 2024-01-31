#include <iostream>
#include <iomanip>
using namespace std;

char Grade(float average){
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

struct student_data
{
    float average;
    float total_marks;
    char grade;
};

int main(){
    struct student_data data;
    int students;
    cout<< "Enter the number of studends: ";
    cin>> students;
    
    for(int i=0; i<students; i++){
        float math, english, science;
        cout<< "Enter the marks for Mathematics, English and Science for student "<< i+1 << ": ";
        cin>> math>>english>>science;
        data.total_marks = math + english + science;
        data.average = data.total_marks/3;
        data.grade = Grade(data.average);
        
        // cout << fixed << setprecision(2);
        cout << "\nStudent " << i+1 << " - Total marks: " << data.total_marks << "\t|\t" << "Average: " << data.average << "\t|\t" << "Grade: " << data.grade << "\t|\t" << endl;
    }
}

// #include <iostream>
// #include <iomanip>

// using namespace std;

// char calculateGrade(float average){
//     if (average >= 90){
//         return 'A';
//     } else if (average >= 80){
//         return 'B';
//     } else if (average >= 70){
//         return 'C';
//     } else if (average >= 60){
//         return 'D';
//     } else{
//         return 'F';
//     }
// }

// int main() {
//     int numStudents;

//     cout << "Enter the number of students: ";
//     cin >> numStudents;

//     for (int i = 1; i <= numStudents; ++i){
//         float math, english, science;

//         cout << "Enter marks for Student " << i << " (Mathematics English Science): ";
//         cin >> math >> english >> science;

//         float total = math + english + science;
//         float average = total / 3;

//         cout << "Student " << i << " - Marks: " << setw(5) << static_cast<int>(math) << setw(5) << static_cast<int>(english) << setw(5) << static_cast<int>(science)
//              << " | Total: " << setw(5) << static_cast<int>(total) << " | Average: " << fixed << setprecision(2) << average
//              << " | Grade: " << calculateGrade(average) << endl;
//     }
// }
