#include<iostream>
using namespace std;
int c=57;
// void sum(){
//     int d=45;
//     cout<<d;
// }
int main(){

    // ****************** Build in Data types *****************
    int a,b,c;
    cout<<"Enter the value of a : ";cin>>a;
    cout<<"Enter the value of b : ";cin>>b;
    c=a+b;
    cout<<"The sum is : "<<c<<endl;
    cout<<"The global c is : "<<::c;                    // :: Scope Resolution Operator

    // *************** float, double and long double Literals ***************
    float d=43.5f;
    long double e=43.5l;
    cout<<"\n\nThe size of 43.5 is : "<<sizeof(43.5)<<endl; // by defualt double
    cout<<"The size of 43.5f is : "<<sizeof(43.5f)<<endl;
    cout<<"The size of 43.5F is : "<<sizeof(43.5F)<<endl;
    cout<<"The size of 43.5l is : "<<sizeof(43.5l)<<endl;
    cout<<"The size of 43.5L is : "<<sizeof(43.5L)<<endl;
    cout<<"The value of d is : "<<d<<endl<<"The value of e is : "<<e<<endl<<endl;
    
    // ****************** Reference Variables ******************
    // Adnan Sk ---> Adii ---> Addu ---> Addy
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // ****************** Typecasting ******************
    int u=56;
    float v=56.78; 
    cout<<"The value of u is : "<<(float)u;
    cout<<"\nThe value of u is : "<<float(u)<<endl<<endl;
    cout<<"The value of v is : "<<(int)v;
    cout<<"\nThe value of v is : "<<int(v);
    int w = int(v);
    cout<<"\n\n\nThe expression is : "<<u + v;
    cout<<"\nThe expression is : "<<u + int(v);
    cout<<"\nThe expression is : "<<float(u) + (int)v;
    cout<<"\nThe expression is : "<<u + float(v);

    return 0;
}

