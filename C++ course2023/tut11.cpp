// **************   Break or Continue  **********    User snippets - boilerplate    ************

#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
        if(i==3){
            continue;
        }
        if(i==7){
            break;
        }        
        cout<<i<<endl;
    }
    cout<<"----"<<endl;
    for (int i = 0; i <= 13; i++)
    {
        if(i==4 || i==11 || i==8){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}