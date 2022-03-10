#include<iostream>
using namespace std;
void swap(int *m , int *n){
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

int main (){
    int a,b;
    cout << "Enter the two number to swap them."<<endl;
    cout << "Enter the value of a :";cin >> a;
    
    cout << "Enter the value of b :";
    cin >> b;
    swap(&a,&b);
    cout << "value of a :" << a<<endl;
    cout << "value of b :" << b;


    return 0;
}
