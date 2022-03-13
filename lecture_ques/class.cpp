#include<iostream>
#include<string>
using namespace std;

class binary {
    public :
        string s;
        void enter(void);
        void check_binary(void);
};

void binary :: enter (void){
    cin>> s;
}

void binary :: check_binary(void){
    for (int i =0 ; i < s.length() ; i++){
        if (s.at(i)!='1' && s.at(i) != '0' ){
            cout << "Not a binary number. "<< endl;
            exit (0); 
        }
    }
}

int main (){
    binary number ;
    number.enter();
    number.check_binary();

    return 0;
}
