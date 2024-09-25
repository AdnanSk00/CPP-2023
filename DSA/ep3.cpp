#include<iostream>
using namespace std;

int main(){
    // int a;
    // cin>>a;
    // cout<<"Value of n is : " << n <<endl;

    // if a is positive
    // if(a>0){
    //     cout<<"A is positive" <<endl;
    // }
    // else{
    //     cout<<"A is negative" <<endl;
    // }

    // int a, b;
    // cin>>a>>b;
    // cout<<"Value of a & b is "<<a <<" " <<b <<endl;
    
    // a = cin.get();
    // a = '1' --> 49 ASCII
    // cout<<"Value of a is :"<< a <<endl;

    // int a, b;
    // cout<<"Enter the value of a : ";
    // cin>>a;
    // cout<<"Enter the value of b : ";
    // cin>>b;
    // if(a>b){
    //     cout<<"A is greater" <<endl;
    // }
    // else{
    //     cout<<"B is greater" <<endl;
    // }

    // int a;
    // cout<<"Enter the value of a : ";
    // cin>>a; 
    // if(a>0){
    //     cout<<"A is positive";
    // }
    // else if(a<0){
    //         cout<<"A is negative";
    // }
    // else{
    //     cout<<"A is zero";        
    // }

    // cpp prog to check the case of character
    char ch;
    cout<<"Enter any charecter : ";
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<"This is lowercase";
    }
    else if(ch>=65 && ch<=90){
        cout<<"This is uppercase";
    }
    else{
        cout<<"This is numeric";
    }
        
    return 0;
}