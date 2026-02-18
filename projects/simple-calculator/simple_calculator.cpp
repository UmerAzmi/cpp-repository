#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Cannot divide by zero." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    double a, b;

    cout << "Welcome to Calculator." << endl;

    while (true) {
        cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 5) break;

        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        if (choice == 1) cout << "Result: " << add(a, b) << endl;
        else if (choice == 2) cout << "Result: " << subtract(a, b) << endl;
        else if (choice == 3) cout << "Result: " << multiply(a, b) << endl;
        else if (choice == 4) cout << "Result: " << divide(a, b) << endl;
        else cout << "Invalid choice." << endl;
    }

    cout << "Goodbye!" << endl;
    return 0;
}
