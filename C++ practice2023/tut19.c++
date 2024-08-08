// Unary increment (++) and decrement (--) operator overloading program in C++

// C++ program for unary increment (++) and decrement (--) operator overloading :-

#include<iostream>
using namespace std;

class NUM{
    private:
        int n;
    public:
        void setNumber(int x){
            n = x;
        }
        void dispNum(void){
            cout<<"Value of n is: "<<n<<endl;
        }
        // unary ++ operator overloading
        void operator++(void){
            n = ++n;
        }
        // unary -- operator overloading
        void operator--(void){
            n = --n;
        }
};


int main(){
    NUM num;
    num.setNumber(57);

    // num.operator++();
    ++num;
    cout<<"After increment - ";
    num.dispNum();
    cout<<endl;

    // num.operator--();
    --num;
    cout<<"After decrement - ";
    num.dispNum();
    cout<<endl;

    return 0;
}