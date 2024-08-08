// **********************       Parameterized Constructors      *********************

#include<iostream>
using namespace std;

class Point{
    int x, y;
    public :
        Point(int a, int b){            // Parameterized Constructor
            x = a;
            y = b;
            cout<<"Let see the example "<<endl;
        }

        Point(){cout<<"My name is Shaikh"<<endl;}

        void displayPoint(){
            cout<<"The point is : ("<<x<<", "<<y<<")"<<endl;
        }
    
};


int main(){
    Point p(1, 1), s,r;
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    return 0;
}