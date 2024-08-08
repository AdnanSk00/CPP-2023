// *****************************   <<<'''POINTER'''>>>   *****************************

    // What is a pointer ?  => data type which holds the address of other data types   
#include<iostream>
using namespace std;

int main(){
    int a=3;
    int *b = &a;

    // // & -> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // // * -> (value at) Dereference Operator  
    cout<<"\nThe value at address b is "<<*b<<endl<<endl<<endl;

    // // Pointer to pointer :
    int **c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    int x,y,z;
    x=5;
    y=x;
    z=y;
    cout<<z;    
    return 0;
}