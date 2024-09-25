#include<iostream>
using namespace std;

int main(){

    // cout<<"Aadab e Jahan - 2/1/2024"<<endl <<"I am learning DSA on love bubber youtube channel ";
    int n, i = 2;
    // for(int j=1; j<=6; j++){
        cout<<"Enter any number to check it prime or not : ";
        cin>>n;
        while(i<n){
            if(n%i==0){
                cout << "Not prime" << endl;
                break;
            }
            i++;
        }
        if(i==n){
            cout << "Prime number" << endl;
        }
    // }
    
    return 0;
}