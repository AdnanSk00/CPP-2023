//  **********************************      Single Inheritance      *********************************

#include <iostream>
using namespace std;

class Base
{
    int data1;                             // By default private and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}

class Derived : private Base                // Class is being derived privately
{ 
    int data3;

public:
    void process();          // We Can call the private members of Base class inside this two functions
    void display();
};

void Derived ::process()
{
    setData();               // setData() is private             
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

// Private Data can not be call outside the class through an object 
int main()
{
    Derived der;
    // der.setData();
    der.process();
    der.display();

    return 0;
}