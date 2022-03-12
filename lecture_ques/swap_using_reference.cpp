 #include <iostream>
using namespace std;
void swap (int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    
}
int main (){
    int x = 4;
    int y = 2;
    cout <<" Value of x is (before swap function) : "<< x << endl;
    cout <<" Value of y is (before swap function) : " << y << endl;
    swap (x,y);
    cout <<" Value of x is (after passing value into the swap function) : "<< x << endl;
    cout <<" Value of y is (after passing value into the swap function) : " << y << endl;

    return 0 ;
}
