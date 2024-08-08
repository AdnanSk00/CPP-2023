// ********************************    Array of Objects    *******************************
#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee : ";
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl
             << endl;
    }
} fb[5];

int main()
{
    // Employee Adii, Shaheen, Abu, Kazi, Rohit;
    // Adii.setId();
    // Adii.getId();
    Employee fb[5]; //  Array of Objects --> fb
    // fb->salary = 2;

    for (int i = 0; i < 5; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}