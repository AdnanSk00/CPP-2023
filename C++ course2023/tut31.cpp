//  **************************      Constructor Overloading      *************************

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()                       // Default Constructor
    { 
        a = 0;
        b = 0;
    }
    Complex(int x, int y)           // two Parameterized Constructor
    {
        a = x;
        b = y;
    }

    Complex(int x)                  // one Parameterized Constructor
    { 
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    // Complex c1(5);
    Complex c1(4, 6);
    c1.printNumber();

    // Complex c2(4, 6);
    Complex c2(3);
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    return 0;
}