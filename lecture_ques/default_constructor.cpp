#include <iostream>
using namespace std;
/*
    ABOUT CONSTRUCTOR :
    1.  Constructor is a special member function having the name as of class.
    2.  It is used to initialize the objects of its class.(basically ab setdata() is not required)
    3.  It is automaticaly invoked (called) whenever an object is created.
*/
class complex {
    int a,b;
    public:
        complex(void);  // declaration of a constructor
        void printit (){
            cout << "complex number is : " << a << "+" << b << "i" << endl;
        }
};
//defining the constructor.
//this is a default constructor as it not taking any parameter.
complex :: complex (void){
    // cout << "oye "<< endl ;
    a= 1;
    b= 4;
    cout << "helo world"<< endl;
}

int main (){
    complex c1,c2,c3;
    c1.printit();
    c2.printit();
    c3.printit();
    return 0;
}
/*
    characteristics of Constructors :
1.  It should be declared in the public section of the class.
2.  They are automatically invoked whenever the object is created.
3.  They cannnot return values and do not have return types.
4.  It can have default argumentds.
5.  We cannot refer to their address.
*/
