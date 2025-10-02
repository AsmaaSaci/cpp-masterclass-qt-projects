#include <iostream>
using namespace std ;
int main() {
    int divisor=0 ,dividend=0 ;
    int quotient=0 ,remainder=0 ;
    // input 
    cout << "enter divisor: "<< endl;
    cin >> divisor ;
    
    cout << "enter dividend: "<< endl;
    cin >> dividend ;
    // cal 
    quotient = dividend/divisor ;
    remainder = dividend%divisor ;
    // print 
     cout << " quotient " <<quotient<<  endl; 

     cout << " remainder " <<remainder<<  endl; 

    return 0;
}
