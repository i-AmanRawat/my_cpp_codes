#include <iostream>
using namespace std ;
class student {
    protected :
        int roll_number ;
    public :
        void set_rollno(int r ){
            roll_number = r;
        }
        void print_rollno(void){
            cout << "Your Roll Number is : "<< roll_number<< endl;
        }
};

class test : virtual public student {
    protected :
        float physics;
        float maths ;
    public : 
        void set_marks (float m1 , float m2){
            physics = m1;
            maths = m2;
        }
        void print_marks(void ){
            cout << "You have obtained :"<<endl
                 << physics
                 << " marks in physics."<< endl
                 << maths
                 << " marks in maths."<< endl;
        }
};

class sports : virtual public student{
    protected:
        float score;
    public :
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout << "Your score in sport is "<<score<< endl;
        }
};

class result : public test, public sports{
    protected :
        float total;
    public :
        void display (void){
            total = physics + maths + score;
            print_rollno();
            print_marks();
            print_score();
            cout <<"In total you have scored "<< total<< " marks."<<endl;
        }
};


int main (){
    result s1;
    s1.set_rollno(01);
    s1.set_marks(95.5,99.5);
    s1.set_score(90);
    s1.display();
}
/*
we made the student (base class) virtual bcz we were inheriting test and sports class from it and finally result class from test and sports 
so just to avoid the duplicacy for member in the result class while inheriting test and sports we included student virtually.
*/
