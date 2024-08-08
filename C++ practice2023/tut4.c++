// C++ program to create class methods

#include<iostream>
using namespace std;

class Sample{
    public:
        void printText1();
        void printText2();
        void printValue(int);
};

void Sample :: printText1(){
    cout<<"IncludeHelp.com"<<endl;
}

void Sample :: printText2(){
    cout<<"Let's learn together"<<endl;
}

void Sample :: printValue(int value){
    cout<<"Value is : "<<value;
}


int main(){
    Sample obj;
    obj.printText1();
    obj.printText2();
    obj.printValue(786);

    return 0;
}