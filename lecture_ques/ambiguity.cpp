#include <iostream>
using namespace std;
/*
    Example of ambiguity
    i.e. greet function is available in both the classes ,base1 and base2 ,so when you will inherite
    b1 and b2 in derived class and define a object in derived class and would call that greet function for that
    object then it will through error #ambigious
    so basically you have to decide which greet function you want to use, so before calling greeting funtion through 
    derived class object you have declare inside the defination of the derived class the greeting function from which 
    class you want to inherit it.
*/

class base1
{
public:
    void greet(void)
    {
        cout << "good morning " << endl;
    }
};

class base2
{
public:
    void greet(void)
    {
        cout << "good afternoon " << endl;
    }
};

class derived : public base1, public base2
{
public:
    void greet(void)
    {
        base1::greet();
    }
};

int main()
{
    base1 b1;
    b1.greet();
    base2 b2;
    b2.greet();
    derived d1;
    d1.greet();
}
