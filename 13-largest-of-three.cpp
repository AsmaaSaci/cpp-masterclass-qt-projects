#include <iostream>
using namespace std;

int main() {
    int number1 = 0, number2 = 0, number3 = 0;
    cout << "Enter your number 1: ";
    cin >> number1;
    cout << "Enter your number 2: ";
    cin >> number2;
    cout << "Enter your number 3: ";
    cin >> number3;

    if (number1 >= number2 && number1 >= number3)
        cout << "Number 1 is largest" << endl;
    else if (number2 >= number1 && number2 >= number3)
        cout << "Number 2 is largest" << endl;
    else
        cout << "Number 3 is largest" << endl;

    return 0;
}
