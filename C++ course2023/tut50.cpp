// ************************   Pointer - New & Delete Keyword   *********************** 

#include<iostream>
using namespace std;

int main(){

    // Basic Example - Pointer
    int a = 4;
    int *ptr = &a;
    // *ptr = 999;
    cout<<"The value of a is "<< *(ptr) <<endl;

    // ------------------------  'NEW'  Operator  --------------------------
    
    // int *p = new int(40);

    // float q = 40.78;
    // float *p = &q;
    float *p = new float(40.78);          
    cout<<"The value at address p is "<< *(p) <<endl;

    // int r[3] ; 
    // int *arr = &r[3];
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;        // *(arr+2) = 30;

    // ------------------------  'DELETE'  Operator  --------------------------
    
    // delete arr;      // Free - Contigous Block of Memory
    delete[] arr;       // Free - Full Contigous Block of Memory

    cout<<"The value of arr[0] is " << arr[0] <<endl;
    cout<<"The value of arr[1] is " << arr[1] <<endl;
    cout<<"The value of arr[2] is " << arr[2] <<endl;
    
    // delete Operator :


    return 0;
}