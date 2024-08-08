//******************************     tut 42.cpp Exercise Answer     *****************************

#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    int a, b;
    public:
    void setDataSimple(){
        cout<<"Enter the value of a - ";
        cin>>a;
        cout<<"Enter the value of b - ";
        cin>>b;
    }

    void performOperationsSimple(){
        cout<<"The value of a + b is :"<<a+b<<endl;
        cout<<"The value of a - b is :"<<a-b<<endl;
        cout<<"The value of a * b is :"<<a*b<<endl;
        cout<<"The value of a / b is :"<<a/b<<endl<<endl;
    }
};

class ScientificCalculator{
    int p, q;
    public:
    void setDataScientific(){
        cout<<"Enter the value of p - ";
        cin>>p;
        cout<<"Enter the value of q - ";
        cin>>q;
    }

    void performOperationsScientific(){
        cout<<"The value of sin(p) and sin(q) is :"<<sin(p)<<" & "<<sin(q)<<endl;
        cout<<"The value of cos(p) and cos(q) is :"<<cos(p)<<" & "<<cos(q)<<endl;
        cout<<"The value of exp(p) and exp(q) is :"<<exp(p)<<" & "<<exp(q)<<endl;
        cout<<"The value of tan(p) and tan(q) is :"<<tan(p)<<" & "<<tan(q)<<endl;   
    }
};

class HybridCalculator : public SimpleCalculator , public ScientificCalculator{
        
};


int main(){
    HybridCalculator calc;
    calc.setDataSimple();
    calc.performOperationsSimple();
    calc.setDataScientific();
    calc.performOperationsScientific();

    return 0;
}