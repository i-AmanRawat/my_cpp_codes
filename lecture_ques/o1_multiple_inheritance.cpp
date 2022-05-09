#include <iostream>
using namespace std ;
/*
    Example of Multiple Inheritance :
        Student --> Marks --> Result     //inheritance path 
      
    protected keyword : similar to the private but the only difference is that its members can be inherited 
*/
class student {
    protected :
        int roll_number ;
    public :
        void set_roll_number (int);
        void get_roll_number (void);
};
void student :: set_roll_number(int r ){
    roll_number = r ;
}
void student :: get_roll_number (){
    cout << "Your Roll Number is " << roll_number << endl;
}

class marks : public student {
    protected :
        int physics ;
        int maths ;
    public :
        void set_marks (int , int );
        void get_marks (void);
};

void marks :: set_marks(int m1 , int m2){
    physics = m1;
    maths = m2 ;
}

void marks :: get_marks (void){
    cout << "Marks obtained in physics are "<< physics << endl;
    cout << "Marks obtained in Maths are "<< maths << endl;
}

class result : public marks {
    float percentage ;
    public :
        void display (void);
};

void result :: display(void){
    get_marks();
    cout << "You have scored " << (physics + maths)/2 << "%"<<endl;
}

int main (){
    result r1;
    r1.set_roll_number(1);
    r1.get_roll_number();
    r1.set_marks(95,97);
    r1.display();
}
