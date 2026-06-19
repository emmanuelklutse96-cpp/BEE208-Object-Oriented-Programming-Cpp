#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 8, 2, 15};
    int smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
