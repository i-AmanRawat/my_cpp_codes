#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(void){
            a = 0;
            b = 0;
        }
        complex(int m){
            a = m;
            b = 0;
        }
        complex(int m , int n){
            a = m;
            b = n;
        }
        void printit (){
            cout << "complex number is : " << a << "+" << b << "i" << endl;
        }
};

int main (){
    complex c1;
    complex c2(3);
    complex c3(4,6);

    c1.printit();
    c2.printit();
    c3.printit();
    return 0;
}
