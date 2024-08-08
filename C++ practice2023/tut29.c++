// *******************  Swapping Techniques  *******************

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter the value of a & b : "<<endl;
    cin>>a>>b;
    cout<<"Before swapping - ";
    cout<<"a = "<<a<<" & "<<"b = "<<b<<endl;
    // c = a;
    // a = b;
    // b = c;

    // c = a + b;
    // a = c - a;
    // b = c - b;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout<<"After swapping  - ";
    cout<<"a = "<<a<<" & "<<"b = "<<b<<endl;

    return 0;
}