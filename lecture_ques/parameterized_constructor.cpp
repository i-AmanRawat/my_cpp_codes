#include<iostream>
using namespace std;
class complex{
    int a ,b;
    public :
        complex(int x, int y ){
            a=x;
            b=y;
        }   
        void printit (void){
            cout << "complex number is : " << a << "+" << b << "i" << endl;
        } 
};
int main (){
    complex c1(1,3);    //implicit way of passing the argument in the constructor.
    complex c2 = complex (4,7);     //explicit way of passing the argument in the constructor.
    c1.printit();
    c2.printit();
    return 0;
}
