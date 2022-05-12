#include <iostream>
using namespace std;

class A{
    int data1;
    public :
        void setdata(int data){
            data1 = data;
        }
        void printdata(){
            cout << "Entered data is " << data1 << endl;
        }
};
/*
    it is similar to other pointer (int chat float and even user defined datatype), here we using user defined data type to define
    a pointer.
    you can look code below to get the idea of it.
    further we have also used ' arrow notation ' over the dot notation.
    you also have a look upon, how to create array of objects and also use of ' new ' keyword to dynamically allocate memory
    here you can also use delete keyword to free the memory and interesting fact is use can choose to use malloc() , calloc() function
    , free() function in your code but new is used because of its simplicity.
*/
int main(){    
    // FIRST OBJECT ;
    A obj;
    A *ptr = &obj;
//  (*ptr).setdata(4);  OR
    ptr -> setdata(4);  //known as arrow operator mentos zindagi
//  (*ptr).printdata();
    ptr -> printdata();

    // SECOND OBJECT ;
    A *ptr2 = new A ;
    ptr2 ->setdata(7);
    ptr2 ->printdata();

    //THIRD OBJECT ;
    A *ptr3 = new A[2];
// for zeroth index
    ptr3 -> setdata(1);
    ptr3 -> printdata();
// for first index
    (ptr3 + 1) ->setdata(2);
    (ptr3 + 1) ->printdata();
}
