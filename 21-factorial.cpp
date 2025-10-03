#include <iostream>
using namespace std;

int main() {
    int num = 0, factorial = 1;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = num; i > 0; i--) {
        factorial = factorial * i;
    }

    cout << "Factorial of " << num << " is " << factorial << endl;

    return 0;
}
