#include<iostream>
using namespace std ;
class calculator 
{
private:
    int a , b;
public:
    int p,q ;
    int sum(int p, int q){
        return p+q
        ;
    }
    int mul(int a , int b);
};

int calculator::mul(int a, int b){
    return a*b;
}

int main(){
    int a,b;
    calculator calculation;
    calculation.a=2;
    calculation.b=6;
    cout << "The sum of 4 and 6 is "<< calculation.sum(4,6)<<endl;
    cout << "The multiplication of 4 and 6 is "<< calculation.mul(a,b)<<endl;

    return 0; 
}
