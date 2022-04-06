/*
    net amount sahe nhi aara h , i will check it later on.

*/
#include <iostream>
using namespace std;
class bankacc{
    int principal;
    int rate;
    int year;
    int amount;

    public:
        bankacc (){};
        bankacc (int p , int r, int y);
        bankacc (int p , float r, int y);
        // int balancecalculator(void);
        void passbook(void);
};

bankacc :: bankacc(int p , int r, int y){
    principal = p;
    rate = float(r)/100;
    year = y;
    amount = principal;   
    for (int i =0 ; i < year ; i++){
        amount *= (1+rate);
    }
}

bankacc :: bankacc(int p , float r, int y){
    principal = p;
    rate = r;
    year = y;
    amount = principal;   
    for (int i =0 ; i < year ; i++){
        amount *= (1+rate);
    }
} 

void bankacc :: passbook(void){
    cout << "Your principal amount is "<<principal<<". Now your net amount is "<<amount<< endl;
}

int main (){
    bankacc a1,a2,a3;
    int p,r,y;
    float R;

    cout << "Enter the following details :"<<endl;
    cout << "Principal Amount \nRate and\nTime Period "<<endl;
    cin >> p>>r>>y;
    a1 = bankacc(p,r,y);
    a1.passbook();

    cout << "Enter the following details :"<<endl;
    cout << "Principal Amount \nRate and\nime Period "<<endl;
    cin >> p>>R>>y;
    a2 = bankacc(p,R,y);
    a2.passbook();
    return 0;
}
