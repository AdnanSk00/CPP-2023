// *********************    Header files & Operetor    *********************

// There are two types of header files :
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include"this.h" - This will produce an error if this.h is not present in the current directory.

using namespace std;
int main(){
// ****************************     "Operetors in C++"     ****************************

    int a=5,b=6;
    cout<<"Following are the types of operetors in C++ : "<<endl;
    
    // Arithmetic Operators :
    cout<<"The value of "<<a<<" + "<<b<<" is : "<<a+b;
    cout<<"\nThe value of "<<a<<" - "<<b<<" is : "<<a-b;
    cout<<"\nThe value of "<<a<<" * "<<b<<" is : "<<a*b;
    cout<<"\nThe value of "<<a<<" / "<<b<<" is : "<<a/b;
    cout<<"\nThe value of "<<a<<" % "<<b<<" is : "<<a%b;
    cout<<"\nThe value of a++ is : "<<a++ <<" "<<a;
    cout<<"\nThe value of a-- is : "<<a-- <<" "<<a;
    cout<<"\nThe value of ++a is : "<<++a <<" "<<a;
    cout<<"\nThe value of --a is : "<< --a <<" "<<a;
    cout<<endl<<endl;

    // Assignment Opereators  - Used to assign values to variables
    // int a=3,b=9;
    // char d='d';

    // Comparison Operators :
    cout<<"Following are the comparison operetors in C++ : "<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<endl<<endl;

    // Logical Operators :
    cout<<"Following are the logical operetors in C++ : "<<endl;
    cout<<"The value of this logical 'AND' operator ((a==b) && (a<b)) is : "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical 'OR' operator ((a==b) || (a<b)) is : "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical 'NOT' operator (!(a==b)) is : "<<((a!=b))<<endl;
    
     return 0;
}