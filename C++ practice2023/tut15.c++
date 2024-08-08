//  Simple inheritance program in C++
// C++ program to demonstrate example of simple inheritance

#include<iostream>
using namespace std;

class A{
    public:
        void Afun(void);
};

void A :: Afun(){
    cout<<"I'm the body of Afun()..."<<endl;
}


class B : public A{
    public:
        void Bfun(void);
};

void B :: Bfun(){
    cout<<"I'm the body of Bfun()..."<<endl;
}


int main(){
    B objB;
    objB.Afun();
    objB.Bfun();

    return 0;
}