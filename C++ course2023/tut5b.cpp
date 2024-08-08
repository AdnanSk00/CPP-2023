#include<iostream>
using namespace std;

int main(){
    int value1, value2;
    cout<<"Put the two values : "<<endl;
    cin>>value1>>value2;

    for(int i = 1; i<=5; i++){
        switch (i)
        {
        case 1:
            cout<<"The Addition of "<<value1<<" & "<<value2<<" are : "<<value1+value2<<endl;
            break;
        case 2:
            cout<<"The Subtraction of "<<value1<<" & "<<value2<<" are : "<<value1-value2<<endl;
            break;
        case 3:
            cout<<"The Multiplicaition of "<<value1<<" & "<<value2<<" are : "<<value1*value2<<endl;
            break;
        case 4:
            cout<<"The Division of "<<value1<<" & "<<value2<<" are : "<<value1/value2<<endl;
            break;        

        default:
            cout<<endl<<"...Thanks for calculating on it...";
        }
    }

    return 0;
}