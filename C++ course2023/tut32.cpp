//   ****************************     By Default Paramerterized Constructor       ***************************

#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
        void printData() 
        {
            cout<<"The values of data1, data2 and data3 are "<<data1<<", "<<data2<<" & "<<data3<<endl;
        }
    Simple(int a, int b=9, int c=5)
    {
        data1 = a;
        data2 = b;
        data3 = c;
        printData(); 
    }

    // void printData();       // Function declaration
};

// void Simple :: printData() 
//         {
//             cout<<"The values of data1, data2 and data3 are "<<data1<<", "<<data2<<" & "<<data3;
//         }



int main()
{
    // Simple s(1);
    Simple s(1, 2, 3);
    s.printData();

    return 0;
}