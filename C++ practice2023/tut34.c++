#include<iostream>
using namespace std;

int main(){
    char ch='!', num='1', small='a', cap='A';
    for(ch='!'; ch<='+' && num<='='; ch++ && num++ && small++ && cap++ ){    
        cout<<ch<<" = "<<(int)ch<<"     "<<num<<" = "<<(int)num<<"      "<<small<<" = "<<(int)small<<"      "<<cap<<" = "<<(int)cap<<endl;
        
        // for(char ch=ch; ch<='='; ch++){
        //     cout<<ch<<" = "<<(int)ch<<endl;
        //     break;
        // }
        // do{
        //     char ch = '1';
        //     while(ch<='='){
        //     cout<<ch<<" = "<<(int)ch<<endl;
        //     }
        //     ch++;
        // }while(ch<='=');
    }

    // for(char ch='A'; ch<='Z'; ch++){
    //     cout<<ch<<" = "<<(int)ch<<endl;
    // }
    // for(char ch='a'; ch<='z'; ch++){
    //     cout<<ch<<" = "<<(int)ch<<endl;
    // }
    
    return 0;
}

