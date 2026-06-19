#include <iostream>
using namespace std;
 
int main()
{
    float num1, num2;

    cout << "Enter the first floating-point number: ";
    cin >> num1;

    cout << "Enter the second floating-point number: ";
    cin >> num2;

    float larger = (num1 > num2) ? num1 : num2;

    cout << "The larger number is: " << larger << endl;

    return 0;
}