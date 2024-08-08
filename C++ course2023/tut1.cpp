#include<iostream>
using namespace std;

int main(){
//  cout<<"Hello World "<<endl;        // <<endl - Manipulator for next line
//  cout<<"How are you busy man ?";
    
    int i, j, count;
    count=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            count++;
        }
    }
    cout<<count;
    
    return 0;
}

