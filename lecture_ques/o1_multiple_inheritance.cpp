#include <iostream>
using namespace std ;
/*
    Example of Multiple Inheritance :
        Student --> Marks --> Result     //inheritance path 
*/
class student {
    protected :
        string name;
        int roll_number ;
    public :
        void set_data (string , int);
        void get_data (void);
};
void student :: set_data(string n ,int r ){
    name = n;
    roll_number = r ;
}
void student :: get_data (){
    cout << "Roll Number : " << roll_number << endl;
    cout << "Name : " << name << endl;
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
    r1.set_data("Aman" , 1);
    r1.get_data();
    r1.set_marks(95,97);
    r1.display();
}
