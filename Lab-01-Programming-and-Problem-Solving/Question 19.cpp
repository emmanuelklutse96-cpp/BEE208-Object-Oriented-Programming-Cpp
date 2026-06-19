#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter binary number: ";
    cin >> binary;

    int decimal = 0;

    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }

    cout << "Decimal: " << decimal << endl;
    cout << "Hexadecimal: " << hex << decimal << endl;
    cout << "Octal: " << oct << decimal << endl;

    return 0;
