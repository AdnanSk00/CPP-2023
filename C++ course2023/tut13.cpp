// ************************   ARRAY   ***********************
#include <iostream>
using namespace std;

int main()
{
    // Array Example :
    int marks[] = {12, 34, 56, 78, 5};
    // int mathMarks[4]; // mathMarks[] = {78,99,92,89};
    // mathMarks[0] = 78;
    // mathMarks[1] = 99;
    // mathMarks[2] = 92;
    // mathMarks[3] = 89;

    // cout<<"These are mathMarks : "<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[4]<<endl;

    // You can change the value of an array
    marks[1] = 786;
    // cout<<"These are marks : "<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[0]<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"The value of marks : "<<marks[i]<<endl;
    // }

    // Quick quiz : do the same using while and do-while loops ?

    // 1) By while loop -
    // int i = 0;
    // while(i<4){
    //     cout<<"The value of marks : "<<marks[i]<<endl;
    //     i++;
    // }

    // 2) By do-while loop -
    // do
    // {
    //     // cout<<"The value of marks : "<<marks[i]<<endl;
    //     i++;
    // } while (i < 4);

    // ***************************   POINTERS & ARRAYS   **************************
    
    // int marks[] = {12, 34, 56, 78, 5};
    // marks[1] = 786;
    int *p = marks;
    cout<<*(p++)<<endl;
    cout<<*(p)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The value of *p is : "<<*p<<endl;
    cout<<"The value of *(p+1) is : "<<*(p+1)<<endl;
    cout<<"The value of *(p) is : "<<*(p)<<endl;
    cout<<"The value of *(p+2) is : "<<*(p+1+1)<<endl;
    cout<<"The value of *(p-3) is : "<<*(p-3)<<endl<<endl;

    cout<<"The value of *(p++) is : "<<*(p++)<<endl;
    cout<<"The value of *(++p) is : "<<*(++p)<<endl;
    cout<<"The value of *(p-3) is : "<<*(p-3)<<endl;
    cout<<"The value of *(p) is : "<<*(p)<<endl;

    return 0;
}