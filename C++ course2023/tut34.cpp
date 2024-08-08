// *********************************    Copy Constructor     ********************************

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
        cout<<"Whats wrong "<<endl;
    }

    Number(int num)
    {
        a = num;
    }

    // When there is no constructor is found, compiler supplies its own copy constructor.

    // Number(Number &obj1, Number &obj2)         // Copy Constructor - Object as a parameter
    Number(Number &obj)                           // Copy Constructor - Object as a parameter
    {
        cout << endl
             << "Copy Constructor called" << endl;
        a = obj.a;
        // a = obj2.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45),z2;
    x.display();
    y.display();
    z.display();

    // Number z1(x);
    // Number z1(x,z);
    Number z1(z);          // Copy constructor invoked
    z1.display();

    z2 = z;             // Copy constructor not called
    z2.display();

    // Number z3(z);
    Number z3 = z;           // Copy constructor invoked
    z3.display();
    
    // // z1 should exactly resemble(dikhayi de) z or x or y

    return 0;
}