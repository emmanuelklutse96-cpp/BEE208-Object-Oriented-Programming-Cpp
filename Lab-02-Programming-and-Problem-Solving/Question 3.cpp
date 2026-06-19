#include <iostream>
using namespace std;

int main() {
    int num, largest;

    cout << "Enter numbers (enter 0 to stop): ";
    cin >> num;

    largest = num;

    while (num != 0) {
        if (num > largest) {
            largest = num;
        }

        cin >> num;
    }

    cout << "The largest number entered is: " << largest << endl;

    return 0;
}
