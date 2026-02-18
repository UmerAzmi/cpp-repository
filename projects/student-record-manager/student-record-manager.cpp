#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, double> students;
    int choice;

    cout << "Welcome to Student Record Manager." << endl;

    while (true) {
        cout << "\n1. Add Student\n2. View Students\n3. Calculate Average\n4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            double marks;
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter marks: ";
            cin >> marks;
            students[name] = marks;
            cout << "Student added." << endl;
        }
        else if (choice == 2) {
            if (students.empty()) {
                cout << "No records found." << endl;
            } else {
                for (auto &p : students) {
                    cout << p.first << " : " << p.second << endl;
                }
            }
        }
        else if (choice == 3) {
            if (students.empty()) {
                cout << "No students to calculate average." << endl;
            } else {
                double sum = 0;
                for (auto &p : students) sum += p.second;
                cout << "Average marks: " << sum / students.size() << endl;
            }
        }
        else if (choice == 4) {
            cout << "Bye Bye!" << endl;
            break;
        }
        else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
