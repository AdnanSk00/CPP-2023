// *****************************     File I/O - open() & eof() functions        ****************************

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream out;                 // out --> Object of class(ofstream) 
    out.open("sample60.txt");
    out<<"This is me\n";
    out<<"This is also me\n";
    out<<"This is alsi me";
    out.close();

    ifstream in;
    in.open("sample60.txt");
    string st, st2;
    // in>>st>>st2;
    // cout<<st<<st2;
    // // getline(in, st);
    // // getline(in, st);
    // // getline(in, st);
    // // cout<<st<<endl;
    
    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}