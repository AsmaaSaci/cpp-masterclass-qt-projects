#include <iostream>
using namespace std;

int main() {
    char mychar;
    cout << "Enter character: ";
    cin >> mychar;

    if (mychar == 'a' || mychar == 'e' || mychar == 'i' || mychar == 'o' || mychar == 'u' ||
        mychar == 'A' || mychar == 'E' || mychar == 'I' || mychar == 'O' || mychar == 'U')
        cout << "It is a vowel" << endl;
    else
        cout << "It is not a vowel" << endl;

    return 0;
}
