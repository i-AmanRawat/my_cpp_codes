#include <iostream>
using namespace std;
int factorial (int n){
    if (n==0 || n==1){
        return 1;
    }

    else if (n>1){
        return n * factorial(n-1);
    }
}

int main (){
    int n;
    cout << "Enter a number to calculate it's factorial : "<< endl;
    cin >> n ;
    cout << " Factorial of " << n << " is " << factorial(n)<< endl;
    return 0 ;
}
