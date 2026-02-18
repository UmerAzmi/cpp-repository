#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    cout << "Welcome to Number Guessing Game." << endl;

    int number = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    while (true) {
        cout << "\nEnter your guess (1-100): ";
        cin >> guess;
        attempts++;

        if (guess == number) {
            cout << "You guessed it right!" << endl;
            break;
        } else if (guess > number) {
            cout << "Too high." << endl;
        } else {
            cout << "Too low." << endl;
        }
    }

    cout << "Total attempts: " << attempts << endl;
    return 0;
}