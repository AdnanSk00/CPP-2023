// Default Constructor or No argument program in C++

#include<iostream>
using namespace std;

class Demo{
    private:
        int X, Y;
    public:
        Demo();
        void input();
        void Display();
};

Demo :: Demo(){
    X = 0;
    Y = 0;
}
void Demo :: input(){
    cout<<"Enter Value of X: ";
    cin>>X;
    cout<<"Enter Value of Y: ";
    cin>>Y;
}
void Demo :: Display(){
    cout<<endl<<"X = "<<X<<endl;
    cout<<"Y = "<<Y<<endl;
}

int main(){
    Demo d;
    cout<<"Method 1: "<<endl;
    cout<<"Value after initialization : ";
    d.Display();

    d.input();
    cout<<"Value after User Input: ";
    d.Display();

    Demo d1 = Demo();
     cout<<"Method 2: "<<endl;
    cout<<"Value after initialization : ";
    d1.Display();
    
    return 0;
}