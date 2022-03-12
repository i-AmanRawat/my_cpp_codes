#include <iostream>
using namespace std;
int main (){
    
    float x = 34;
    float &y = x ;
    cout << "The value of x is "<<x<<endl;
    cout << "The value of x is "<<y<<endl;
    cout << "The address of x is "<<&x<<endl;
    cout << "The address of x is "<<&y<<endl;

    return 0 ;
}
