// C++ code to find the power of a number using class and object approach

#include<iostream>
using namespace std;

class Power{
    private:
        int base, exponent;
    public:
        int power(int b, int e){
            base = b;
            exponent = e;
            
            int index, result = 1;
            for(index = 0; index<exponent; index++){
                result = result * base;
            }
            return result;
        }
};

int main(){
    Power P;
    
    int b, e, nikaal;
    
    cout<<"Enter Base: ";
    cin>>b;

    cout<<"Enter Exponent: ";
    cin>>e;

    nikaal = P.power(b, e);
    cout<<b<<"^"<<e<<" = "<<nikaal;
    // cout<<b<<"^"<<e<<" = "<<P.power(b, e);
    // cout<<P.power(b, e);
    
    return 0;
}