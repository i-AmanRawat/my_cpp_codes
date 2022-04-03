 #include <iostream>
using namespace std;

class complex;
class calculator {
    public :
        int sumcomplex(complex o1, complex o2){
        // can be defined in private or public part 
            return (o1.a + o2.a , o1.b + o2.b);
        }
        int sumrealpart(complex o1, complex o2)
        {
            return (o1.a + o2.a);
        }

        int sumimaginary(complex o1, complex o2)
        {
            return (o1.b + o2.b);
        }
};

class complex
{
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

int main()
{
    complex c1, c2;
    calculator c3, c4, c5;

    c1.setdata(1, 2);
    c1.printcomplex();

    c2.setdata(3,7);
    c2.printcomplex();

    int m = c3.sumcomplex(c1, c2);
    cout << m;
    // c3.printcomplex();
    
    int p = c4.sumrealpart(c1, c2);
    cout << p;
    // c4.printcomplex();

    int q = c5.sumimaginary(c1, c2);
    cout << q;
    // c5.printcomplex();
    return 0;
}
