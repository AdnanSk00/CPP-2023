// *******************************        Friend Classes       ******************************

#include <iostream>
using namespace std;

class Complex; // Forward Declaration - Aage banane wala hu

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int SumRealComplex(Complex, Complex);   // Declaration class - Complex
    int SumImgComplex(Complex, Complex);    // Declaration class - Complex
};

class Complex
{
    int a, b;

    // ***************     Individually declaring functions as friends     **************
    // friend int Calculator ::SumRealComplex(Complex , Complex );
    // friend int Calculator ::SumImgComplex(Complex , Complex );

    // Aliter : Ek or tarika - Declaring the entire class Calculator as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::SumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::SumImgComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o1.printNumber();
    o2.setNumber(5, 7);
    o2.printNumber();

    Calculator calc;
    calc.SumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is : " <<calc.SumRealComplex(o1, o2) << endl;
    // int res = calc.SumRealComplex(o1, o2);
    // cout << "The sum of real part of o1 and o2 is : " << res << endl;
        
    int resi = calc.SumImgComplex(o1, o2);
    cout << "The sum of Imaginary part of o1 and o2 is : " << resi << endl;

    return 0;
}