// If - Else Condition :

#include <iostream>
using namespace std;

int main()
{
    // if(6>5){
    // cout<<"6 is greater";
    // }
    // else{
    // cout<<"5 is smaller";
    // }

    int age;
    cout << "Enter your Age : ";
    cin >> age;
    if (age >= 18)
        cout << "Yor are eligible for vote";

    else
        cout << "Yor are not eligible for vote";

    return 0;
}