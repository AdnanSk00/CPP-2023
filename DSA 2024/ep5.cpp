#include<iostream>
using namespace std;

int main(){
    // cpp prog for find sum of all even number upto n;
    int n, i=2, sum=0;
    cout<<"Enter the number : ";
    cin>>n;

    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout<<sum;


    return 0;
}