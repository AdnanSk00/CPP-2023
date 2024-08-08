// *************************  ***  Virtual Functions in C++  ***  ************************

// RUN TIME POLYMORPHISM :-
#include<iostream>
using namespace std;

class Baseclass{
    public:
        int var_base = 1;
        virtual void display(){                 // Virtual function, Run time Binding
            cout<<"1. Displaying Base class variable var_base - "<<var_base<<endl;
        }
};

class Derivedclass : public Baseclass{
     public:
        int var_derived = 2;
        void display(){
            cout<<"\n2. Displaying Base class variable var_base - "<<var_base<<endl;
            cout<<"2. Displaying Derived class variable var_derived - "<<var_derived<<endl;
        }
};

// Virtual Function --> 'virtual' is keyword ki wajah se function ka precedence zyada hone ke bawajood wo call nahi hoga 
int main(){
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();


    return 0;
}