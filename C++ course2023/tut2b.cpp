#include <iostream>
using namespace std;

int main()
{
    int umr;
    cout << "Please Enter you Umr : ";
    cin >> umr;

    if (umr >= 18)
    {
        cout << "You must apply for 'Driving License'";
    }
    else
    {
        cout << "You can not apply for 'Driving License'";
    }

    return 0;
}