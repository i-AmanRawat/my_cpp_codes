#include <iostream>
using namespace std;

class complex;
class calculator {
    public :
        int sumcomplex(complex o1, complex o2);

        int sumrealpart(complex o1, complex o2);

        int sumimaginary(complex o1, complex o2);
};

class complex{
    private:
        int a, b;
    friend class calculator;

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
    };

        /*how can i return 2 values 
        figure this out */
        
int calculator :: sumcomplex(complex o1, complex o2)
        {
            // complex o3;
            return (o1.a + o2.a , o1.b + o2.b);
            // o3.a = o1.a + o2.a;
            // o3.b = o1.b + o2.b;
        }
int calculator :: sumrealpart(complex o1, complex o2)
        {
            return (o1.a + o2.a);
        }
int calculator :: sumimaginary(complex o1, complex o2)
        {
            return (o1.b + o2.b);
        }

int main()
{   
    int m,n;
    complex c1, c2;
    calculator c3, c4, c5;

    c1.setdata(1, 2);
    c1.printcomplex();

    c2.setdata(3,7);
    c2.printcomplex();

    (m ,n) = c3.sumcomplex(c1, c2);
    cout << m<<"+"<<n<<"i"<<endl;
    // c3.printcomplex();

    // c3.sumcomplex(c1,c2);
    // c3.printcomplex();
    
    int p = c4.sumrealpart(c1, c2);
    cout << p<<endl;
    // c4.printcomplex();

    int q = c5.sumimaginary(c1, c2);
    cout << q<<endl;
    // c5.printcomplex();
    return 0;
}
