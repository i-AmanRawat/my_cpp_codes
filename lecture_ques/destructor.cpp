#include <iostream>
using namespace std;
/*
A destructor is a type of function which is called when the object is destroyed. 
Destructor never takes an argument nor does it return any value. 

what is the need to define global variable ( count ) ?
if we will define a member ( count ) inside the class then for every new object it will restart its value
of count.
here comes the role of global variable count.

*/

int count = 0;      //global varible 
class number {
    public:
        //constructor 
        number (void){
            count ++;
            cout << "This is the time when constructor is called for object number "<< count << endl;
        }
        //destructor
        ~number (void){
            cout << "This is the time when distructor is called for the object number "<< count << endl;
            count --;
        }
};


int main (){
    cout << "We are inside our main function" <<endl;
    cout << "Creating first object n1. "<<endl;
    number n1;
    {
        cout << "Entering this block."<<endl;
        cout << "Creating two more objects."<<endl;
        number n2,n3;
        cout << "Exiting this block. "<<endl;
    }
    cout << "Back to main()."<<endl;
    return 0;
}
