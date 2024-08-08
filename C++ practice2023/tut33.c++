// ******************   Bitwise Operators  ******************

#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 7;
    
    // 5 - 101
    // 7 - 111
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;

    cout<<(a<<4)<<endl;
    // 5 - 1010000
    cout<<(b>>1)<<endl;
    // 7 - 011

    cout<<~(a);
    // ~N = -(N + 1)
    

    return 0;
}