// *************************    *  *  INHERITANCE IN C++  *  *   ************************

#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 57.0;
        cout<<"Hello MOTO!"<<endl;
    }
    Employee() {}
};

// Derived class Syntax :
/*
class {{derived-class-name}} : {{visibility mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note :
1. Default visibility mode is private
2. Public Visibility Mode : Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode : Public members of the base class becomes Private members of the derived class
4. Private members are never inherited of base class
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        cout << "Hellloo WhatsApp..."<<endl;
    }
    int langaugeCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), adii(2);
    cout << harry.salary << endl;
    cout << adii.salary << endl;
    Programmer skillF(10);             // Programmer class Inharited from Employee class - Default Constructor of Employee class
    cout << skillF.langaugeCode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}