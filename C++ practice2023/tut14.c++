// Destructors program in C++

#include<iostream>
using namespace std;

class Demo{
    private:
        int X, Y;
    public:
        Demo(){
            X = 0;
            Y = 0;
            cout<<endl<<"Constructor Called"<<endl;
        }
        ~Demo(){
            cout<<"Destructor Called"<<endl;
        }
        void setValues(){
            cout<<"Enter Value of X: ";
            cin>>X;
            cout<<"Enter Value of Y: ";
            cin>>Y;
        }
        void putValues(){
            cout<<"Value of X : "<<X<<endl;
            cout<<"Value of Y : "<<Y<<endl;
        }
};


int main(){
    Demo d1;
    d1.setValues();
    cout<<endl<<"D1 Value are : "<<endl;
    d1.putValues();

    Demo d2;
    d2.setValues();
    cout<<endl<<"D2 Value are : "<<endl;
    d2.putValues();

    return 0;
}