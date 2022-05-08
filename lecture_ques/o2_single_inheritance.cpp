#include <iostream>
using namespace std ;
class base {
    int data1;
    public :
        int data2;
        void setdata();
        int getdata1();
};

void base :: setdata(){
    data1 = 10;
    data2 = 20;
}

int base :: getdata1(){
    return data1;
}

class derived : public base {
    int data3 ;
    public :
        void process ();
        void display();
};

void derived :: process (){
    data3 = data2 * getdata1();
}

void derived :: display(){
    cout << " The value of data1 is " << getdata1() << endl;
    cout << " The value of data2 is " << data2 << endl;
    cout << " The value of data3 is " << data3 << endl;
}

int main () {
    derived der;
    der.setdata();
    der.process();
    der.display();
}

// i don't think there is any need to explain any step in the program because everything is simply understandable
// if you have have understood the previous lecture
