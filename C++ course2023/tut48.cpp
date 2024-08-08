// **********************************     Constructors in Derived Class      *********************************

#include<iostream>
using namespace std;
/*
Case 1 :-
class B : public A{
    // Order of execution of constructor --> First A() then B()
};

Case 2 :-
class C : publc A, public B{
    // Order of execution of constructor --> First A() then B() and C()
}

Case 3 :-
Class C : public B, virtual pulic A{
    // Order of execution of constructor --> First A() then B() and C()
}
*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called "<<endl;
        }
        void printDataBase1(){
            cout<<"The value of data is : "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called "<<endl;
        }
        void printDataBase2(){
            cout<<"The value of data is : "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base2(d), Base1(c){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called "<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is : "<<derived1<<endl; 
            cout<<"The value of derived2 is : "<<derived2<<endl; 
        } 
};


int main(){
    Derived adii(1, 2, 3, 4);
    adii.printDataBase1();
    adii.printDataBase2();
    adii.printDataDerived();

    return 0;
}