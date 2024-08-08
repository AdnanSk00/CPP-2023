//**************************        POINTER         *************************

#include<iostream>
using namespace std;

int main(){
    int a = 57;
    int *ptr = &a;
    // *ptr = 999;
    // ptr == &a;
    // *ptr == a=57;
    cout<<"address of a - "<<&a<<endl;
    cout<<"address of a - "<<ptr<<endl<<endl;
    cout<<"address of ptr - "<<&ptr<<endl;
    cout<<"Value at address of ptr - "<<*ptr<<endl<<endl;

    int **c = &ptr;
    // c == &ptr;
    // *c == ptr;
    // **c == *ptr=a; 
    cout<<"address of ptr - "<<&ptr<<endl;
    cout<<"address of ptr - "<<c<<endl<<endl;
    cout<<"address of a - "<<*c<<endl;
    cout<<"Value at address of c - "<<**c<<endl;


    return 0;
}