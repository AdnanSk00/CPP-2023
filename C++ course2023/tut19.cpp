// ************************   Function Overloading    ***********************        
#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"\nUsing function with 3 arguments"<<endl;
    return a+b+c;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14*r*r*h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a*a*a);
}

// Rectangular box
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 &  6 is : "<<add(3,6)<<endl;
    cout<<"The sum of 1,3 &  6 is : "<<add(3,1,6)<<endl;
    cout<<"\nThe volume of cylinder of radius 3 & height 6 is : "<<volume(3,6)<<endl;
    cout<<"The volume of cube of side 3 is : "<<volume(3)<<endl;
    cout<<"The volume of cuboid of 2,3 & 6 is : "<<volume(2,3,6)<<endl;

    return 0;
}