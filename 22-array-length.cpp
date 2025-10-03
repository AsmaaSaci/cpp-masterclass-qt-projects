#include <iostream>
using namespace std;

int main() {
    int arr[] = {100, 200, 300, 400, 500};
    int arraysize = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of array is: " << arraysize << endl;

    return 0;
}
