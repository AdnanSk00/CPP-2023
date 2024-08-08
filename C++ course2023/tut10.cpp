// *****************************       LOOP in C++     *****************************
#include <iostream>
using namespace std;

int main()
{
    /*
    There are three types of loops in C++ :-
        1. For loop
        2. While loop
        3. do-while loop
    */
    // -------------------------------------------------------------------------------

    // for loop in C++ :
    /* SYntax :
       for(intialization; condition; updation)
       {
        loop body(C++ code);
       } */
    // ******************** Table of any number using for loop ********************
    // int i, n;
    // cout << "enter the number : ";
    // cin >> n;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << n << " x " << i << " = " << n * i << endl;
    // }
    // -------------------------------------------------------------------------------

    // while loop in C++ :
    /* SYntax :
       intialization;
       while(conditiom)
       {
        loop body(C++ code);
        updation;
       } */
    // int j = 2;
    // while (j < 21){
    //     cout<<j<<endl;
    //     j += 2; // j=2+j , // j=j+2
    //     // j=1+j;   // j+=1
    // }
    // ------------------------------------------------------------------------------

    // do-while loop in C++
    /* SYntax :
       intialization;
       do{
        loop body(C++ code);
        updation;
       }(condition); */
    int k = 0;
    do
    {
        cout << k << endl;
        k++;
    } while (k < 10);

    return 0;
}