// Constructor Overloading program in C++

#include<iostream>
using namespace std;

class Demo{
    private:
        int X, Y;
    public:
        Demo();
        Demo(int a, int b);
        void Display();
};

Demo :: Demo(){
    X = 10;
    Y = 20;
}
Demo :: Demo(int a, int b){
    X = a;
    Y = b;
}
void Demo :: Display(){
    cout<<endl<<"X = "<<X<<endl;
    cout<<"Y = "<<Y<<endl;
}

int main(){
    Demo d1;
    cout<<"Default Constructor: "<<endl;
    cout<<"Value after initialization: ";
    d1.Display();

    Demo d2(30, 40);
    cout<<"Parameterized Constructor: "<<endl;
    cout<<"Value after initialization: ";
    d2.Display();

    return 0;
}