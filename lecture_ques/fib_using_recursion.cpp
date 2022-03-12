#include <iostream>
using namespace std;
int fibonaaci(int n ){
    if (n<=2){
        return 1;
    }
    else {
        return fibonaaci(n-2) + fibonaaci(n-1);
    }
}
int main (){
    int limit ;
    cout << "Enter the position for which you want the value of fibonaaci series : "<< endl ;
    cin>> limit;
    cout << " Value at entered position in the fibonaaci series : "<< fibonaaci(limit );
    return 0;
}
