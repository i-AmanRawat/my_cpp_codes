#include <iostream>
using namespace std ;

class A {
    int data1;
    int data2;

    public:
        A (int p, int q){
            data1 = p;
            data2 = q;
            cout << "Base 1 constructor called " << endl;
        }
        void printA (void){
            cout << "value of data1 : "<<data1 <<endl;
            cout << "value of data2 : "<<data2 <<endl;
        }
};

class B {
    int data3;
    int data4;

    public:
        B (int m, int n){
            data3 = m;
            data4 = n;
            cout << "Base 2 constructor called " << endl;
        }
        void printB (void){
            cout << "value of data3 : "<<data3 <<endl;
            cout << "value of data4 : "<<data4 <<endl;
        }
};



class C : public B,public A {
    int data5;
    int data6;
/*
    syntax to assign the value to the constructor of base classes A and B with help of derived class constructor you can 
    assign values to base class constructors. 
    prefrence virtual class > simple class and order of simple class will determine the prefrence like first come advantage.
    --> but what preference am i talking about ??
    its actually the very first line where i have defined my derived class and inherited other class in the syntax their is oder
    that i had followed first i have called B then A change this oder any see the difference on your own.
*/
    public :
        C (int a1 , int a2 , int b1 , int b2 , int c1 , int c2 )  : A(a1,a2),B(b1,b2){ 
            data5=c1;
            data6=c2;
        }
        void display(void){
            printA();
            printB();
            cout << "value of data5 : "<<data5 <<endl;
            cout << "value of data6 : "<<data6 <<endl;
        }
};

int main(){
    C one(1,2,3,4,5,6);
    one.display();
}
