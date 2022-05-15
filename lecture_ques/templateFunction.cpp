#include<iostream>
using namespace std;
//function overloading 
//template function so that with the help of a single function we can deal with different datatypes 
template <class T1, class T2>
void average (T1 a, T2 b){
    float avg = (a+b)/2.0;
    cout << "Template waala call huwa !"<< endl;
    cout <<avg<<endl;
}

void average (int a, int b){
    float avg = (a+b)/2.0;
    cout << "simple waala call huwa !"<< endl;
    cout <<avg<<endl;
}

int main(){
    average(100,50);    //Exact match takes the higher precedence
    average (4,5.5);
}
