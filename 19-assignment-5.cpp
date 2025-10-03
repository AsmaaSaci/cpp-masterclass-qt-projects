#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;

    do {
        sum += i;
        i++;
    } while (i <= 10);

    cout << "The sum of the first 10 natural numbers is: " << sum << endl;

    return 0;
}
