// A function friendly to two classes :-

#include <iostream>
using namespace std;

class abc;

class xyz
{
    int x;
public:
    void setvalue(int y) 
    {
        x = y; 
    }
    friend void max(xyz, abc);
};
 
class abc
{
    int a;
public:
    void setvalue(int i)
    { 
        a = i;
    }
    friend void max(xyz, abc);
};

void max(xyz m, abc n)
{
    if (m.x >= n.a)
        cout << m.x;
    else
        cout << n.a;
}

int main()
{
    xyz s;
    s.setvalue(20);
   
    abc j;
    j.setvalue(10);
      
    max(s, j);
    
    return 0;
}