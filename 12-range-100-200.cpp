#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 100 && number <= 200)
        cout << "Your number is in the range 100 to 200." << endl;
    else
        cout << "Your number is not in the range 100 to 200." << endl;

    return 0;
}
