// *******************   Read/Write in the Same Program & Closing Files   ****************** 

#include<iostream>
#include<fstream>

using namespace std;


int main(){
    // connecting our file with hout stream
    ofstream hout("sample60.txt");              // hout --> object of class(ofstream)
    
    // Creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name - ";
    cin>>name;

    // Writing a string to the file
    hout<<name + " is my name";
    hout.close();


    ifstream hin("sample60.txt");               // hin --> object of class(ifstream)
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"\nThe content of this file is: "<<content;
    hin.close();


    return 0;
}