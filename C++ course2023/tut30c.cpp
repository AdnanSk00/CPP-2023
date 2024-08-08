//  ***************************     Distance Between Two Points     **************************
#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x, y;
    friend double PointDistance(Point P1, Point P2);

    public :
        Point(int a, int b){            // Parameterized Constructor
            x = a;
            y = b;
        }
        // void displayPoint(){
        //     cout<<"The point is : ("<<x<<", "<<y<<")"<<endl;
        // }
    
};
double PointDistance(Point o1, Point o2){
    int x_diff = (o2.x - o1.x);
    int y_diff = (o2.y - o1.y);
    double diff = sqrt(pow(x_diff,2)+pow(y_diff,2));
    return double(diff);
}

int main(){
    Point P1(5, 4), P2(2, 7);
    cout<<PointDistance(P1, P2);

    return 0;
}