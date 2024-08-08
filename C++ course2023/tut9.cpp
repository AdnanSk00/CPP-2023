// ***************************      If - Else       **************************

#include <iostream>
using namespace std;

int main()
{
    cout << "This is tutuorial 9\n\n";
    // Selection control structure : if else-if else ladder
    int age, age1;

    for (int i = 0; i < 3; i++)
    {
        cout <<endl<< "Enter your age please : ";
        cin >> age;
        if (age >= 13 && age <= 19)
        {
            cout << "you are a teenager ";
        }
        else if (age < 13)
        {
            cout << "you are a child";
        }
        else
        {
            cout << "You are a man";
        }
     }

        // Selection control structure : Switch Case statements
        cout <<endl<< "Enter your age please : ";
        cin >> age1;
        switch (age1)
        {
        case 18:
            cout<<"You are 18"<<endl;
            break;
        case 22:
            cout<<"You are 22"<<endl;
            // break;
        case 57:
            cout<<"You are 57"<<endl;
            // break;
        default:
        cout<<"No special cases"<<endl;
            // break;
        }
        cout<<"Done with switch case"<<endl;

        // C++ program for greatest of three numbers :

        int x, y, z, v;
        cout << "Enter the first number : ";
        cin >> x;
        cout << "Enter the second number : ";
        cin >> y;
        cout << "Enter the third number : ";
        cin >> z;
        if(x>y){
            if(x>z){
                cout<<x<<" is greater";
            }
            else{
                cout<<z<<" is greater";
            }
        }
        else{
            if(y>z){
                cout<<y<<" is greater";
            }
            else{
                cout<<z<<" is greater";
            }
        }
        //  *********************   Ternary Operator    ********************

        v = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
        cout << v << " is greater";

        return 0;
    }