#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter integers (enter a negative number to stop): ";

    while (true) {
        cin >> num;

        if (num < 0) {
            break;   // Stop when a negative number is entered
        }

        if (num > 0) {
            sum = sum + num;   // Add only positive numbers
        }
    }

    cout << "The sum of all positive numbers is: " << sum << endl;

    return 0;
}