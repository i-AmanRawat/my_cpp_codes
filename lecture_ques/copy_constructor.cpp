/*
    COPY CONSTRUCTOR
*/

#include <iostream>
using namespace std;
class numbers{
    int n;

    public :
        numbers(){}; // to avoid error. if we don't declare and define this constructor then line 30 ( numbers r ) will cause an error

        numbers(int a){
            n=a;
        }

        numbers (numbers &x){
            n = x.n;
        }

        void display(void){
            cout << "The number is "<< n <<endl;
        }
};

//  when no, copy constructor is invoked then compiler supplies its own copy constructor 
//  that's why line 28 is not causing an error bcz compiler is providing the by default copy constructor.

int main (){
    numbers p,q,r;
    p = numbers (5);
    q = p;              //not an example of copy constructor bcz the object 'q' was already created.
                        //by default copy constructor is used               
    numbers s(p);       //it is an example of copy constructor bcz s is freshly created.(   method 01   )
    numbers t = s;      //it is an example of copy constructor bcz t is freshly created.(   method 02   )

    p.display();
    q.display();
    s.display();
    t.display();
    return 0;
}
/*  
        SYNTAX :
    <class_name> ( <class_name> , &<variable> ){
        <variable__in_constructor's_defination> = <variable> . <variable_you_using_in_defination> ;
    }
*/
