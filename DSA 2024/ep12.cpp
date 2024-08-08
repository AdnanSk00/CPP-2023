// Prime or not :-

#include<iostream>
using namespace std;

// int main(){
//     int n, i = 2;
//         cout<<"Enter any number to check it prime or not : ";
//         cin>>n;
//         while(i<n){
//             if(n%i==0){
//                 cout << "Not prime" << endl;
//                 break;
//             }
//             i++;
//         }
//         if(i==n){
//             cout << "Prime number" << endl;
//         }    
//     return 0;
// }

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    bool isPrime = 1;

    for(int i = 2; i<n; i++){

        if(n%i == 0){
            // cout << "Not a prime number";
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0){
        cout << "Not a prime number";
    }
    else{
        cout << "Is a prime number";
    }

    return 0;
}