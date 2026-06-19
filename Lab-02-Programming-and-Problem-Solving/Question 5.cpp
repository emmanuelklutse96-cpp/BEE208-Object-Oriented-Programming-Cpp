#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter numbers (enter a number that is not a multiple of 3 to stop):" << endl;

    while (true) {
        cin >> num;

        if (num % 3 != 0) {
            break;   // Stop if the number is not a multiple of 3
        }

        sum = sum + num;   // Add the multiple of 3 to the sum
    }

    cout << "The sum of all multiples of 3 entered is: " << sum << endl;

    return 0;
}
