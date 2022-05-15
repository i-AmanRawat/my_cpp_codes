#include <iostream>
using namespace std;

template <class T1, class T2>
class numbers{
    T1 data1;
    T2 data2;
    public :
        numbers(T1 m , T2 n){
            data1 = m;
            data2 = n;
        }
        void display (void){
            cout << "Value of data1 : "<<data1<<endl;
            cout << "Value of data2 : "<<data2<<endl;
        }

};

int main (){
    numbers <int , float> num(2,3.4);
    num.display();
}
