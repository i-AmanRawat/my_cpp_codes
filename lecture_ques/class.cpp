#include<iostream>
#include<string>
using namespace std;

class binary {

    string s;   //by default this member of class is private.

    public :
        void enter(void);
        void check_binary(void);
        int ones (void);
        int zeroes (void ); 
};

void binary :: enter (void){
    cout << " Enter the number : "<< endl;
    cin>> s;
}

void binary :: check_binary(void){
    for (int i =0 ; i < s.length() ; i++){
        if (s.at(i)!='1' && s.at(i) != '0' ){
            cout << "Not a binary number. "<< endl;
        exit (0);                                  
                                                     // exit will exit the program if the number is not binary.
                                                    // Because if the number is not binary there is no sense in 
        }                                           // calculating the zeroes and ones.
    }
}

int binary :: ones (void){
    int count =0 ;
    for (int i =0 ; i < s.length() ; i++ ){
        if (s.at(i)=='1'){
            count +=1;
        }   
    }return count;
}

int binary :: zeroes (void ){
    int zero=0;
    zero = s.length() - ones();
    return zero ;
}

int main (){
    binary number ;
    number.enter();
    number.check_binary();
    cout << "Numbers of ones in the entered number : "<< number.ones() <<endl;
    cout << "Numbers of zeroes in the entered number : "<< number.zeroes() <<endl;
    return 0;
}
