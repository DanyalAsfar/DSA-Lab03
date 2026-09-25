//Danyal Asfar
//552124
//BSCS-15
//Section D
#include <iostream>
#include <string>
using namespace std;

struct Student{
    int rollNumber;
    string fullName;
    float marks; // could be in decimal places
};

void displayStudent(const Student* s){
        cout << "Roll Number: " << s -> rollNumber << endl 
            << "Full Name: " << s -> fullName << endl
            << "Marks: " << s -> marks << endl;
    }

void updateMarks(Student* s, float newMarks){
    s -> marks = newMarks;
}

int main(){
    Student* student1 = new Student;

    cout << "Enter Roll Number:\n";
    cin >> student1 -> rollNumber;

    cout << "Enter Full Name:\n";
    cin.ignore(); // newline character still in buffer
    getline(cin, student1 -> fullName); // to get whole line

    cout << "Enter Marks:\n";
    cin >> student1 -> marks;

    displayStudent(student1);


    //update marks
    float updatedMarks;
    cout << "\nEnter Updated Marks:\n";
    cin >> updatedMarks;

    updateMarks(student1, updatedMarks);

    cout << "\nUpdated Record:\n";
    displayStudent(student1);

    delete student1;
    student1 = nullptr;
    
    return 0;
}
