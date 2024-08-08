// *************************** * * * *  *      OOP's       *  * * * * **************************

// ***************************        CLASSES & OBJECTS       **************************
#include<iostream>
using namespace std;

class Employee
{
    // private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1, int b1, int c1);      // Declaration - Aage banane wala hu
        void getData(){
            // d=15;
            // e=50;
            cout<<"The value of a is : "<<(*this).a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<"The value of c is : "<<c<<endl;
            cout<<"The value of d is : "<<d<<endl;
            cout<<"The value of e is : "<<e<<endl;
        }
}adii;                     // Object of class(Employee) -> adii
void Employee :: setData(int a1, int b1, int c1){       // Employee -> class name
 
    a=a1;
    b=b1;
    c=c1; 
    // d= 15;
    // e=6;
}


int main(){
    // Employee adii;      // Object of class(Employee) -> adii
    // adii.a = 32;  -> Error - 'a' is private
    adii.d = 57 ;
    adii.e = 60;
    adii.setData(1,2,4);
    adii.getData();
    return 0;
}