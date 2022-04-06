#include <iostream>
using namespace std;
class simple{
    int x,y;
    public :
        simple (int a = 1 , int b = 9){
            x = a;
            y = b;
        }
        void display (void);
};
void simple :: display(void){
    cout << "The data is "<< x <<" and "<< y<<endl;
}
//constructor with default arguement 
int main (){
    simple s (2,4);
    simple s1 (4);
    simple s2 ;
    s.display();
    s1.display();
    s2.display();
    return 0;
}
