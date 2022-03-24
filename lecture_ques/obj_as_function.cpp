/*
    passing object as a arguement in the function 
*/

#include<iostream>
using namespace std;
class complex {
    int a;
    int b;

    public :
        void set_complex_number(int v1 , int v2){
            a = v1;
            b = v2;
        }

        void print_complex_number (void){
            cout << a<<" + "<<b<<"i"<< endl; 
        }

        void sum_of_complex_number (complex o1 , complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
};

int main(){
    complex c1 ,c2 ,c3;
    c1.set_complex_number(1,2);
    cout << "first complex number is : "<< endl;
    c1.print_complex_number();

    c2.set_complex_number(3,4);
    cout << "second complex number is : "<< endl;
    c2.print_complex_number();

    c3.sum_of_complex_number(c1 , c2);
    cout << "sum of complex number is : "<< endl;
    c3.print_complex_number();
    return 0;
}
