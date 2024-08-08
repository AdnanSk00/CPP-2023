// *************************    Static member/variable of class    ************************

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // by Default count = 0

public:
    void setData(void)
    {
        cout << "Enter the id : ";
        cin >> id;
        count++;            // count = count+1 ;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id;       // throws an error
        cout << "The value of count is - " << count << endl;
    }

}; // adii,kohli,sharma;                        //  Object ----> adii,kohli,sharma

//////////          count is the static data member of class Employee
int Employee :: count; // Default value is 0
// int Employee :: count = 20;         // you can assign the value of static variable ----> 20

int main()
{
    Employee adii, kohli, sharma; // Object of class(Employee) -> adii
    // adii.id=1;
    // adii.count=1;           // cannot do this as id and count are private

    adii.setData();
    adii.getData();
    Employee :: getCount();             // Static data function

    kohli.setData();
    kohli.getData();
    Employee :: getCount();

    sharma.setData();
    sharma.getData();
    Employee :: getCount();

    adii.setData();
    adii.getData();
    

    return 0;
}