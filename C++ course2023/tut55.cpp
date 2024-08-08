// **************************      Pointer to Derived Class      *************************

#include<iostream>
using namespace std;

class Baseclass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base - "<<var_base<<endl;
        }
};

class Derivedclass : public Baseclass{
     public:
        int var_derived;
        void display(){
            cout<<"\nDisplaying Base class variable var_base - "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived - "<<var_derived<<endl;
        }
};


int main(){
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer = &obj_base;          // Pointing base class pointer to derived class 

    // base_class_pointer->var_derived = 570;   // Will throw an error
    base_class_pointer->var_base = 57;
    base_class_pointer->display();     

    base_class_pointer->var_base = 5700;
    base_class_pointer->display();              // Late Binding

    Derivedclass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 786;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();              // Late Binding

    return 0;
}