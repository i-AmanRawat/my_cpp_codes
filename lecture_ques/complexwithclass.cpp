#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int m, int n)
    {
        a = m;
        b = n;
    }

    void printcomplex()
    {
        cout << "complex number is : " << a << "+" << b << "i" << endl;
    }

    void sumcomplex(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    int sumrealpart(complex o1, complex o2)
    {
        cout << "sum of real part of entered complex numbers is " << (o1.a + o2.a) << endl;
    }

    int sumimaginary(complex o1, complex o2)
    {
        cout << "sum of imaginary part of entered complex numbers is " << (o1.b + o2.b) << endl;
    }
};
int main()
{
    complex c1, c2, c3, c4;
    c1.setdata(1, 2);
    c1.printcomplex();
    c2.setdata(1, 2);
    c2.printcomplex();
    c3.sumcomplex(c1, c2);
    c3.printcomplex();
    c3.sumrealpart(c1, c2);
    c3.sumimaginary(c1, c2);
    return 0;
}
