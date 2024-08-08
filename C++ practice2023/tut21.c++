// STATIC DATA MEMBER IN C++ :-

#include <iostream>
using namespace std;

class item
{
    static int count;   // count is static
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void get_count(void)
    {
        cout<<"count :"<<count<<endl;
    }
};

int item :: count;       // count defined

int main()
{
    item a, b, c;
    a.get_count();
    b.get_count();
    c.get_count();
    
    a.getdata(100); 
    b.getdata(200); 
    c.getdata(300);
    
    cout<<"After reading data : "<<endl;
    a.get_count();
    b.get_count();
    c.get_count();

    return 0;
}