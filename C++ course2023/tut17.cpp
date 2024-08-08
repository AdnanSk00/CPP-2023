#include<iostream>
using namespace std;

inline int product(int a, int b){   // inline -> fast execution due to replacement 
    // Not recommended to use below lines with inline functions
    // static int c=0;     //This executes only once time
    // c=c+1;              // Next time this function is run, the value of c will be retained
    // return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04){     // Default value factor=1.04
    return currentMoney * factor;
}
// int strlen(const char *p){         // Function -> As a constant
                                    
// }
int main(){
    int a, b;
    // cout<<"Enter the value of a & b : "<<endl;cin>>a>>b;
    // cout<<"The product of a & b is : "<<product(a,b)<<endl;
    // cout<<"The product of a & b is : "<<product(a,b)<<endl;
    // cout<<"The product of a & b is : "<<product(a,b)<<endl;
    // cout<<"The product of a & b is : "<<product(a,b)<<endl;
    int money=100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyReceived(money,1.1)<<" Rs after 1 year";
    
    return  0;
}
