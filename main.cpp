#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void setData(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void display() {
        cout << "Roll No: " << rollNo
             << " | Name: " << name
             << " | Marks: " << marks << endl;
    }

    float getMarks() {
        return marks;
    }
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n--- Student Record Manager ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Show Average Marks\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int roll;
            float marks;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> roll;
            cout << "Enter marks: ";
            cin >> marks;

            Student s;          // create a new object
            s.setData(name, roll, marks);
            students.push_back(s);   // add it to our list

            cout << "Student added!\n";
        }
        else if (choice == 2) {
            if (students.empty()) {
                cout << "No students added yet.\n";
            } else {
                for (int i = 0; i < students.size(); i++) {
                    students[i].display();
                }
            }
        }
        else if (choice == 3) {
            if (students.empty()) {
                cout << "No students to average.\n";
            } else {
                float total = 0;
                for (int i = 0; i < students.size(); i++) {
                    total += students[i].getMarks();
                }
                cout << "Average marks: " << (total / students.size()) << endl;
            }
        }
        else if (choice == 4) {
            cout << "Exiting program. Bye!\n";
        }
        else {
            cout << "Invalid choice, try again.\n";
        }

    } while (choice != 4);

    return 0;
}