// *********************      C++/OOP's  program's      ******************** 

// C++ program to create a simple class and object.

#include<iostream>
using namespace std;

class Hello{
    public: 
        void sayHellow(){
            cout<<"Hello World";
        }
};

int main(){
    Hello h;
    h.sayHellow();

    return 0;
}