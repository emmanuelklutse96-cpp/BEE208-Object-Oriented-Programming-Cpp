#include <iostream>
using namespace std;

int main() {
    char ch;
    int vowelCount = 0;

    cout << "Enter characters (enter 'q' to stop):" << endl;

    while (true) {
        cin >> ch;

        if (ch == 'q') {
            break;   // Stop when 'q' is entered
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }

    cout << "The number of vowels entered is: " << vowelCount << endl;

    return 0;
}
