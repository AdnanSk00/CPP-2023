// **************************       Swapping of two numbers      *************************

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

// This will not swap a and b 
void swap(int a, int b){             // temp a   b
    int temp = a;                    //  4   4   6
    a = b;                           //  4   6   6
    b = temp;                        //  4   6   4
}

// *********************    Call by reference using pointers    ********************
void swapPointer(int* a, int* b){     // temp a   b
    int temp = *a;                    //  4   4   6
    *a = *b;                          //  4   6   6
    *b = temp;                        //  4   6   4
}
// *********************    Call by reference using C++ reference Variables    ********************
// int & 
void swapRefereceVar(int &a, int &b){     // temp a   b
    int temp = a;                          //  4   4   6
    a = b;                                 //  4   6   6
    b = temp;                              //  4   6   4
    // return a;
}

void process(int x, int y){
    cout<<"-------------"<<endl;
    cout<<"| temp = x  |"<<endl;
    cout<<"|  x =  y   |"<<endl;
    cout<<"|  y = temp |"<<endl;
    cout<<"-------------"<<endl;
}

int main(){
    // int x, y;
    int x = 4, y = 6;
    
    // cout<<"The sum of 4 and 6 is : "<<sum(x,y)<<endl;    
    cout<<"\nThe value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    // swap(x,y);   // This will not swap a and b
    
    process(x, y);
    swapPointer(&x, &y);            // This will swap a and b using pointer reference 
    // swapRefereceVar(x, y);       // This will swap a and b using pointer variables 
    
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl<<endl;
    
    
    return 0;
}
