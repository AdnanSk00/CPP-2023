// *******************************  Initialization List/Section in Constructors  ******************************

#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor :
constructor (argument-list) : initialization-section{
    assignment + other code ;
}

class Test{
    int a, b;
    public:
        Test(int i, int j) : a(i), b(j){
            constructor-body ;
        }
};
*/

class Test{
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(j){
            // a(i) == a=i;
            // b(j) == b=j;
        // Test(int i, int j) : a(i), b(i+j)
        // Test(int i, int j) : a(i), b(2 * j)
        // Test(int i, int j) : a(i), b(a + j)
        // Test(int i, int j) : b(j), a(i + b) --> RED Flag this will create problems because 'a' will be initiliz first
        Test(int i, int j) : a(i)
        {
            b = j;
            cout<<"Constructor executed"<<endl ;
            cout<<"Value of a is "<<a<<endl<<"Value of b is "<<b;
        }
};

int main(){
    Test t(5, 6);


    return 0;
}