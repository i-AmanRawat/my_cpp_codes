#include <iostream>
using namespace std;
//  pointer to derived class
// run time polymorphism
class base {
    public :
        int var_base=1;
        virtual void display (void){        // virtual function 
            cout <<"Display 1 is called : "<< endl;
            cout << "value of var_base is "<< var_base<<endl;
        }
};

class derived : public base {
    public :
        int var_derived=2;
        void display (void){
            cout <<"Display 2 is called : "<< endl;
            cout << "value of var_base is "<< var_base<<endl;
            cout << "value of var_derived is "<< var_derived<<endl;
        }
};

int main (){
    base b_obj;         //base class object 
    derived d_obj;      //derived class object 
    base *b_ptr;        //base class pointer variable 
    derived *d_ptr;     //derived class pointer variable
    b_ptr = &d_obj;
    b_ptr->display();
}
