#include<iostream>
using namespace std;
/*
    syntax for directly initilizing the variables :
        constructor-name(temporary variables) : initialization {
            other set of code;
        } 

Q.>    when do we use this syntax ?
Ans.>  programmer generally opt this template when the code becomes complex just to initialize values to variables in the begning.
*/
class A{
    int x;
    int y;
    public :
    /*
        A (int m , int n ) : x(m) , y(x+n) --> will work
        A (int m , int n ) : y(n) , x(y+m) --> will not work
        the reason being y variable is defined later in the class 
    */
        A (int m , int n ) : x(m) , y(n){
            cout <<"Value of x is "<<x<<endl<<"Value of y is "<<y<<endl;
        }
};

int main (){
    A first(4,7);
}
