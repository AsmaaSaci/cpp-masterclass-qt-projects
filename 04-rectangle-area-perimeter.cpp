#include <iostream>
using namespace std ;
int main() {
    int length =0 ,breadth=0 ;
    int area=0, perimeter =0 ;
    cout << "enter len :"<< endl;
    cin >> length;
    cout << "enter breadth:"<< endl;
    cin >> breadth;
    area = length*breadth;
    cout << " Area " <<area<<  endl; 
    perimeter =2*(length+breadth);
      cout << " perimeter " <<perimeter<<  endl; 

   
    return 0;
}
