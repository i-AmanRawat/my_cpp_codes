#include <iostream>
using namespace std;
//base class
class employee {
    public:
        int id ;
        employee (int empid){
            id = empid;
        }
        employee (){}
};
/*
    SYNTAX -
        class {{derived-class-name}} : {{visibily-mode}} {{base-class-name}}
        {
            members;
        }

    NOTE :
            1. By default visibilty mode is private.
            2. Public Visibility Mode : Public members of base class become Public member of derived class.
            3. Private Visibility Mode : Public members of base class become Private member of derived class.
            4. Private members cannot be accessed. 
*/
class programmer : employee {   //{{base class}} employee (base class) jo hai automatically default constructor ko call krte hai 
    public :
        programmer (int prgid){
            id = prgid;
        }
        void display (void){
            cout << id ;
        }
};

int main(){
    employee e1(9), e2;
    programmer pro1 (5);
    pro1.display();
    return 0;
}
