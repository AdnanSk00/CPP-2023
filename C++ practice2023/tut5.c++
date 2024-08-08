//  C++ Code to find out the factorial of a number using class and object Approach

#include<iostream>
using namespace std;

class Factorial{
    private:
        int number;
    public:
        void factorial(int n){
            number = n;
            int index, factorial = 1;
            for(index = number; index >=1; index--){
                factorial *=index;
            }
        cout<<"Factorial of "<<number<<" is "<<factorial<<endl;
        }
};

int main(){
    Factorial F;
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    F.factorial(n);

    return 0;
}