// STATIC MEMBER FUNCTIONS :-

#include <iostream>
using namespace std;

class test
{
    int code;
    static int count;       // static member variable
public:
    void setCode(void)
    {
        code = ++count;
    }
    void showcode(void)
    {
        cout <<"object member : "<< code << endl;
    }
    static void showCount(void)
    {
        cout <<"count = "<< count << endl;
    }
};

int test :: count;

int main()
{
    test t1, t2;
    t1.setCode();
    t2.setCode();
    test :: showCount();
    
    test t3;
    t3.setCode();
    test :: showCount();
    
    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}