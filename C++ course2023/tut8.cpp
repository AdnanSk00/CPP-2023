#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=56;
    cout<<"The value of a was : "<<a<<endl;
    a=60;
    cout<<"The value of a is : "<<a<<endl;
    
    //  ****************** Constants in C++ ******************
    // int a=8;
    // cout<<"The value of a was : "<<a<<endl;
    // const a=56;                     // You will get an error because 'a' is a 'const'.
    // cout<<"The value of a is : "<<a;
    
    // ********************* Manipulators in C++ *********************
    int d=0, a1=2, b1=56, c=12345;
    cout<<"The value of a without setw is : "<<a1<<endl;
    cout<<"The value of b without setw is : "<<b1<<endl;
    cout<<"The value of c without setw is : "<<c<<endl<<endl;

    for(int i = 1; i<=7; i++){
    cout<<"The value of d is :"<<setw(i)<<d<<endl;
    }
    cout<<"The value of a is :"<<setw(5)<<a1<<endl;
    cout<<"The value of b is :"<<setw(6)<<b1<<endl;
    cout<<"The value of c is :"<<setw(7)<<c<<endl;

    // ****************** Operator Precedence ******************
    int a2=3,b2=4;
    int c2=(a2*5)+b2;
    c2=((((a2*5)+b2)-45)+87);
    cout<<c2;
    
    return 0;
}