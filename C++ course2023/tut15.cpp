// *************************   FUNCTION    ************************
#include <iostream>
using namespace std;

// Function prototype :
// type function-name (arguments);

int sum(int a, int b);       // -> Acceptable               // Aage banane wala hu
// int sum(int a, b);        // -> Not Acceptable
// int sum(int, int);        // -> Acceptable
// void g(void);       // -> Acceptable
void g();              // -> Acceptable

int main()
{
    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "The sum is : " << sum(num1, num2) << endl;
    g();

    return 0;
}

int sum(int a, int b)
{
    cout << "Adnan Shaikh" << endl;
    // Formal Parameters a and b will be taking values from actual parameters num1 & num2
    // int c = a+b;
    return a + b;
}

void g()
{
    cout << "Hello, Good morning Mr. Adnan";
}