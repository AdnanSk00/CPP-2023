// Variables & Scopes :

#include<iostream>
using namespace std;

int main(){
    int a = 3;
    cout << a << endl;

    if(true){
        int b = 5;
        cout << b << endl;
    }

    int b = 1;
    cout << b << endl;

    // int b = 3;
    int i = 8;
    // cout << b << endl;

    for(; i < 8; i++){
        cout << i << ") Hi " << endl;
    }

    if(1){
        int b;
        if(1){
            int b;
            int b = 9;
            if(1){
                // int b;
                cout << b << endl;
            }
        }
    }

    return 0;
}