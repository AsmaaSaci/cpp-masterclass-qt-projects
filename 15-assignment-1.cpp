#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0)
        cout << "The number is Even." << endl;
    else
        cout << "The number is Odd." << endl;

    return 0;
}
