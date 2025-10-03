#include <iostream>
using namespace std ;
int main() {
    int a=0 ,b=0,c=0 ,d=0 ;
    int total=0 ,average=0 ;
    // input 
    cout << "enter 1st no: "<< endl;
    cin >> a ;
    
   cout << "enter 2st no: "<< endl;
    cin >> b ;
    
     cout << "enter 3st no: "<< endl;
    cin >> c;
    
     cout << "enter 4st no: "<< endl;
    cin >> d ;
    // cal 
    total = a+b+c+d ;
    average = (a+b+c+d)/4;
    // print 
     cout << " total  " <<total <<  endl; 

     cout << " average " <<average<<  endl; 

    return 0;
}
