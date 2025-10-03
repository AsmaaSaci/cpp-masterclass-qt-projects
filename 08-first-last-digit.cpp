#include <iostream>
using namespace std ;
int main() {
    int num = 0,first = 0 , last =0 , mid=0;
    // input 
    cout << "enter number: "<< endl;
    cin >> num ;
    // logic
    first = num/100;
    last =num %10;
    mid = (num /10)%10;
    // print nd cal
     cout << "first = " << first<<  endl; 
     cout << "last = " << last<<  endl;
     cout << "mid = " << mid<<  endl;
     
    return 0;
}
