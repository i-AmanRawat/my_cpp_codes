#include <iostream>
using namespace std;
//  pointer to derived class
class base {
    public :
        int var_base;
        void display (void){
            cout <<"Display 1 is called : "<< endl;
            cout << "value of var_base is "<< var_base<<endl;
        }
};

class derived : public base {
    public :
        int var_derived;
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

    //playing with base class pointer   (base class pointer with derived class object in it)
    b_ptr = &d_obj;     //passing the address of derived class object in base class pointer
    b_ptr->var_base=4;
    b_ptr->display();
    // b_ptr->var_derived=5;    not possible bcz pointer is of base class (although object of derived class is passed);
    
    //playing with erived class pointer     (derived class pointer with derived class object in it)
    d_ptr = &d_obj;
    d_ptr->var_derived=8;
    d_ptr->display();

    d_ptr->var_base=6;      //d_ptr belongs to derived class and derived class is inherited with base class so pointer of derived class
    d_ptr->display();       //is capable of accessing the member of base class
}
