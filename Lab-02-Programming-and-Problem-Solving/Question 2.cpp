#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int count = 0;

    cout << "Enter strings (type 'done' to stop):" << endl;

    while (true) {
        cin >> word;

        if (word == "done") {
            break;   // Stop when "done" is entered
        }

        count++;   // Count each string entered
    }

    cout << "The number of strings entered is: " << count << endl;

    return 0;
}