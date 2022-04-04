#include <iostream>
using namespace std;
class y;
class x {
    private :
        int val;
    public:
        void setdata(int n);
        void print();
    friend void exchange (x &, y & );
};

class y{
    private :
        int num;
    public:
        void indata(int m){
            num = m;
        }
        void print(){
            cout << num;
        }
    friend void exchange (x & , y & );
};

void x::setdata(int n){
            val = n;
        }
void x::print(){
            cout << val;
        }

void exchange (x &c1 , y &c2  ){
    int temp = c1.val;
    c1.val = c2.num;
    c2.num = temp;
}

int main(){
    x c1;
    y c2;
    c1.setdata(29);
    cout << "Numbers before swaping : ";
    c1.print();
    cout << endl;
    c2.indata(42);
    c2.print();
    cout << endl;
    exchange(c1 , c2);
    cout << "Numbers after swaping : ";
    c1.print();
    cout << endl;
    c2.print();

    return 0;
}
