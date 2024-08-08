// ************************   -: Local & Global Variables :-  ***********************

#include <iostream>
using namespace std;

int glo = 56; // Global variable
void sum()
{
    int a; glo=57;
    cout << glo << " ";
}
int main()
{
    int glo = 9; // Local variable
    glo = 78;
    // int a=5;
    // int b=6;
    int a = 5, b = 6;
    float pi = 3.14;
    char c = 'u';
    bool is = false;
    // bool is = true;
    sum();
    cout << glo << "\n";
    cout << ::glo << "\n"
         << is  <<endl;

    // cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<<b<<".\n";
    // cout<<"\nThe value of pi is : "<<pi;
    // cout<<"\nThe value of c is : "<<c;
    return 0;
}
