// C++ program for input output execution with addition of two numbers :

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;           
    cout << "Enter the value of num1 : ";       // '<<' - Insertion operator
    cin >> num1;                                // '>>' - Extraction operator
    cout << "Enter the value of num2 : ";
    cin >> num2;
    cout << "The Addition of " << num1 << " and " << num2 << " is : " << num1 + num2;

    // num3=num1+num2;
    // cout<<"The Addition of "<<num1<<" and "<<num2<<" is : "<<num3;

    return 0;
}