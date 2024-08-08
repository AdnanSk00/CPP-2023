#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any alphabet : ";
    cin>>ch;
    if(ch>=65 && ch<=97){
        cout<<"Small letter of captial "<<ch<<" is ( "<<(char)(ch+32)<<" )";
    }
    else{
        cout<<"Capital of small "<<ch<<" is ( "<<(char)(ch-32)<<" ).";
    }

    return 0;
}