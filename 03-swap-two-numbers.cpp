#include <iostream>
using namespace std ;
int main() {
    int x=10 , y=20 ;
    int temp=0;
    temp = x;
    x=y;
    y =temp;
    cout << " first number " <<x<<  endl; 
    cout << " secend number " <<y<<  endl; 
   
    return 0;
}
