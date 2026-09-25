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
        cout << "\nRoll Number: " << s -> rollNumber << endl 
            << "Full Name: " << s -> fullName << endl
            << "Marks: " << s -> marks << endl << endl;
    }
    else
        cout << "\nNo record available!\n\n";
}

void updateMarks(Student* s, float newMarks){
    s -> marks = newMarks;
}

int main(){
    Student* student = nullptr;

    int option = -1;
    while (option != 5){
        cout << "1: Create Record\n"
            << "2: Display Record\n"
            << "3: Update Record\n"
            << "4: Delete Record\n"
            << "5: Exit\n\n";
        cout << "Enter Option:\n";
        cin >> option;
        switch (option) {
            case 1:
                if (student == nullptr){
                    student = new Student;
                    cout << "\nEnter Roll Number:\n";
                    cin >> student -> rollNumber;

                    cout << "\nEnter Full Name:\n";
                    cin.ignore(); // newline character still in buffer
                    getline(cin, student -> fullName); // to get whole line

                    cout << "\nEnter Marks:\n";
                    cin >> student -> marks;
                }
                else
                    cout << "\nA Record Already Exists!\nCannot Create a new Record!\n\n";
                break;
            case 2:
                displayIfExists(student);
                break;

            case 3:
                if (student != nullptr){
                    //update marks
                    float updatedMarks;
                    cout << "\nEnter Updated Marks:\n";
                    cin >> updatedMarks;

                    updateMarks(student, updatedMarks);
                    cout << "Marks Updated!\n";
                }
                else
                    cout << "No Record to Update!\n";
                break;
            case 5: // placed here to fall through to delete
                cout << "Exiting...\n";
            case 4:
                if (student != nullptr){
                    delete student;
                    student = nullptr;
                    if (option != 5){
                        cout << "Record Deleted!\n";
                    }
                }
                else
                    cout << "No Record Exists to Delete!\n";
                
                break;
            default:
                cout << "Invalid Option!!!";
                break;
        }

    }
    return 0;
}
