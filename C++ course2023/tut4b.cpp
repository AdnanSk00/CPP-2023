#include<iostream>
using namespace std;

int num = 10;
int same();

int main(){
    int num = 25;
    cout<<"The value of num is : "<<::num<<endl;
    same();

    return 0;
}

int same(){
    // int num = 15;
    cout<<num;
}