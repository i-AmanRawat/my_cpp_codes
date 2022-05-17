#include <iostream>
#include <math.h>
using namespace std;
template <class T>
class simple_Cal {
    T m;
    T n;
    public :
        simple_Cal(T x , T y){
            m=x;
            n=y;
        }
        void plus(void){
            cout << "sum of x and y is "<< m+n << endl;
        }
        void minus(void){
            cout << "substraction of x and y is "<< m-n << endl;
        }
        void multiply(void){
            cout << "multiplication of x and y is "<< m*n << endl;
        }
        void divide(void){
            cout << "division of x and y is "<< m/n << endl;
        }
};

template <class T>
class scientific_Cal {
    T m;
    T n;
    public :
        scientific_Cal(T x , T y){
            m=x;
            n=y;
        }
        void power(){
            cout << "X to the power Y is "<<pow (m,n)<<endl;
        }
};

int main(){
    simple_Cal <int> c1(4,6);
    scientific_Cal <int> c2(2,32);
    c1.plus();
    c2.power();
}
