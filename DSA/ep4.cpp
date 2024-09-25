#include<iostream>
using namespace std;

int main(){
    // cpp prog for number series from 1 to n;
    // int n, i=1;
    // cout<<"Enter the number : ";
    // cin>>n;
    // while(i<=n){
    //     cout<< i <<" ";
    //     i++;
    //     // i = i + 1; 
    // }

    int n, i=1, sum=0;
    cout<<"Enter the number : ";
    cin>>n;

    // while(i<=n){
    //     sum = sum + i;
        
    //     i = i + 1;
    // }
    sum = (n*i + n*n)/2;
    
    cout<<"Total sum from 1 to "<< n <<" is "<< sum ;
    
    return 0;
}