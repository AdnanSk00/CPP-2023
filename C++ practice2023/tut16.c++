// Multilevel inheritance program in C++
// C++ program to demonstrate example of multilevel inheritance

#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        void set_a(int val_a){
            a = val_a;
        }
        void disp_a(){
            cout<<"The Value of a : "<<a<<endl;
        }
};

class B : public A{
    private:
        int b;
    public:
        void set_b(int val_a, int val_b){
            set_a(val_a);
            b = val_b;
        }
        void disp_b(){
            disp_a();
            cout<<"The Value of b : "<<b<<endl;
        }
};

class C : public B{
    private:
        int c;
    public: 
        void set_c(int val_a, int val_b, int val_c){
            set_b(val_a, val_b);
            c = val_c;
        }
        void disp_c(){
            disp_b();
            cout<<"The Value of c : "<<c<<endl;
        }
};


int main(){
    C objC;
    objC.set_c(10, 20, 30);
    objC.disp_c();

    return 0;
}