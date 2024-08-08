// **********************       Parameterized Constructorss      *********************

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);          // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)      // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    cout << "Hello World"<<endl;
}


int main()
{
    // Implicit call
    Complex a(4, 6), z(2,5);            // a --> Object of class Complex
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();


    return 0;
}