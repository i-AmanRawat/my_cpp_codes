#include<iostream>
using namespace std;
int main(){
    int a =20;
    int *b = &a;
    cout << "The address of a is "<< b<<endl;
    cout << "The address of a is "<< &a<<endl;
    cout << "Value of a (using pointer variable) is "<<*b<<endl<<"\n";

    // pointer to pointer 
    int **c;
    c = &b;
    cout << "The address of pointer varible b is "<< c<<endl;
    cout << "The address of b is "<< &b<<endl;
    cout << "Value of a (using pointer variable) is "<<**c<<endl;
    cout << "The address of at b is "<< *c <<"\n";
    
    // triple pointer concept
    int ***d ;
    d=&c;
    cout << "The address of pointer varible c is "<< d<<endl;
    cout << "The address of c is "<< &c<<endl;
    cout << "Value of c (using pointer variable) is "<<***d<<endl;
    cout<< "The address of a " <<**d<<endl;
    cout<< "The address of b " <<*d;

    return 0;
}
