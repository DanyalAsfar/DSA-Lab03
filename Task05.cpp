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

void displayIfExists(const Student* s){
    if (s != nullptr){
        cout << "Roll Number: " << s -> rollNumber << endl 
            << "Full Name: " << s -> fullName << endl
            << "Marks: " << s -> marks << endl << endl;
    }
    else
        cout << "No record available\n\n";
}

int main(){
    Student* student1 = nullptr;

    cout << "Before Allocation:\n";
    displayIfExists(student1);

    student1 = new Student;

    cout << "Enter Roll Number:\n";
    cin >> student1 -> rollNumber;

    cout << "Enter Full Name:\n";
    cin.ignore(); // newline character still in buffer
    getline(cin, student1 -> fullName); // to get whole line

    cout << "Enter Marks:\n";
    cin >> student1 -> marks;

    cout << "\nAfter Allocation:\n";
    displayIfExists(student1);

    delete student1;
    student1 = nullptr;

    cout << "After Deletion:\n";
    displayIfExists(student1);

    return 0;
}
