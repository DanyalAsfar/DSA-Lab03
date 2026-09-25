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

    void displayDetails(){
        cout << "Roll Number: " << rollNumber << endl 
            << "Full Name: " << fullName << endl
            << "Marks: " << marks << endl;
    }
};

int main(){
    Student* student1 = new Student;

    cout << "Enter Roll Number:\n";
    cin >> student1 -> rollNumber;

    cout << "Enter Full Name:\n";
    cin.ignore(); // newline character still in buffer
    getline(cin, student1 -> fullName); // to get whole line

    cout << "Enter Marks:\n";
    cin >> student1 -> marks;

    student1 -> displayDetails();

    return 0;
}
