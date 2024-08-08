#include<iostream> 
using namespace std;

int main(){
    char ch; 
    for(int i=0; i<=4; i++){
        cout<<"Enter any alphabet : ";
        cin>>ch;
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"Vowel"<<endl;
        }
        else{
            cout<<"Consonent";
            exit (0);
        }
    }
    cout<<"Thanks...";

    return 0;
}