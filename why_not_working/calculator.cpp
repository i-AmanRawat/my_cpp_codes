#include <iostream>
#include <cmath>
using namespace std;

class simple_calculator
{
protected:
    float a;
    float b;
    float add;
    float minus;
    float division;
    float multi;

public:
    void get_numbers(float m , float n)
    {
        a=m;
        b=n;
        // cout << "Enter first number : ";
        // cin >> a;
        // a = m;
        // cout << "Enter second number : ";
        // cin >> b;
        // b = n;
    }
    void sum(void)
    {
        float add = a + b;
    }
    void substract(void)
    {
        float minus = a - b;
    }
    void multiply(void)
    {
        float multi = a * b;
    }
    void divide(void)
    {
        float division = a / b;
    }
    // void display(void)
    // {
    //     cout << "The addition of two number : " << add;
    //     cout << "The substraction of two number : " << minus;
    //     cout << "The division of two number : " << division;
    //     cout << "The multiply of two number : " << multi;
    // }
};

// class scientific_calculator
// {
// protected:
//     float a;
//     float s;
//     float c;
//     float sq;
//     float l;

// public:
//     void set_data(int m){
//         a = m;
//     }
//     void sine(void)
//     {
//         s = sin(a);
//     }
//     void cose(void)
//     {
//         c = cos(a);
//     }
//     void square_root(void)
//     {
//         sq = sqrt(a);
//     }
//     void logarithm(void)
//     {
//         l = log(a);
//     }
// };

class hybride_calculator : public simple_calculator{// , public scientific_calculator{
    public :
    void display ( void ){
        cout << " The sum is "<< add << endl;
        cout << " The substraction is "<< minus << endl;
        cout << " The multiplication is "<< multi << endl;
        cout << " The division is "<< division << endl;
        // cout << " The value of sin function is "<< s << endl;
        // cout << " The value of cos function is "<< c << endl;
        // cout << " The value of square root function is"<< sq << endl;
        // cout << " The value of logarithmic function is "<< l << endl;


    }

};

int main()
{
    hybride_calculator cal1;
    cal1.get_numbers(10,5);
    cal1.sum();
    cal1.substract();
    cal1.divide();
    cal1.multiply();
    // cal1.set_data(45);
    // cal1.sine();
    // cal1.cose();
    // cal1.square_root();
    // cal1.logarithm();
    cal1.display();
}
