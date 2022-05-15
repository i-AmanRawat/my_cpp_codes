#include<iostream>
using namespace std;
//template function so that with the help of a simgle function we can deal with different datatypes 
template <class T1, class T2>
void average (T1 a, T2 b){
    float avg = (a+b)/2.0;
    cout <<avg<<endl;
}

int main(){
    average (4,5.5);
}
