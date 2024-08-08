// ****************************       Pointers to Objects & Arrow Operator      ***************************

#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real <<endl;
            cout<<"The imaginary part is "<< imaginary <<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};


int main(){
    // Complex c1;
    // Complex *ptr = &c1;                           // Access public member of Object through Pointer
    
    Complex *ptr = new Complex;                      // Using 'New' Operator
    
    // (*ptr).setData(1, 57);  // is Exactly same as
    ptr->setData(1, 57);                             // Arrow Operator
    // -> operator : pointer (ptr) jis object ko point karta(new Complex) hai us object ka setData run karo 
    
    // (*ptr).getData(); is as good as
    ptr->getData();



// ****************     Array of Objects Using Pointer    ****************

    // Complex c2;
    // Complex *ptr1 = &c2;
    Complex *ptr1 = new Complex[4];                     // Using 'New' Operator
    
    ptr1->setData(1, 7);                                // Arrow Operator
    ptr1->getData();

    return 0;
}