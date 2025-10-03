#include <iostream>
using namespace std;

int main() {
    int num = 0, total = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num; 

    for (int i = 1; i <= 10; i++) {
        temp++;
        total += temp;
    }

    cout << "Sum of the next 10 numbers after " << num << " is " << total << endl;

    return 0;
}
