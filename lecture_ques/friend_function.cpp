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

    friend complex sumcomplex(complex o1, complex o2);
    // can be defined in private or public part 

    void sumrealpart(complex o1, complex o2)
    {
        a = (o1.a + o2.a);
    }

    void sumimaginary(complex o1, complex o2)
    {
        b = (o1.b + o2.b);
    }
};

    complex sumcomplex(complex o1, complex o2)
    {
        complex o3;
        o3.a = o1.a + o2.a;
        o3.b = o1.b + o2.b;
        o3.setdata(o3.a , o3.b);
        o3.printcomplex();
    }



int main()
{
    complex c1, c2, c3, c4, c5;

    c1.setdata(1, 2);
    c1.printcomplex();

    c2.setdata(3,7);
    c2.printcomplex();

    sumcomplex(c1, c2);
    
    c4.sumrealpart(c1, c2);
    c4.printcomplex();

    c5.sumimaginary(c1, c2);
    c5.printcomplex();
    return 0;
}
