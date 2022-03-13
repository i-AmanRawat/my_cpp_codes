/*
    Example of function overloading.
*/
#include<iostream>
using namespace std ;
int sum (int m , int n){
    return m+n;
}

int sum (int p , int q , int r){
    return p+q+r;
}

int main (){
    cout << "The sum of 4 and 5 is "<< sum (4,5)<< endl;
    cout << "The sum of 4 , 5 and 5 is "<< sum (4,5,5)<< endl;
    return 0;
}
