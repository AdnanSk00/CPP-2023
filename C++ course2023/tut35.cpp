//      *************************     Destructor ic C++     ************************ 

#include<iostream>
using namespace std;

// Object ke bante hi us object ka block exit hone par ya object ka kaam khatam hote hi destructor kaam karta hai
// Destructor never takes an argument nor does it return any value.

int count = 0;

class num{
    public:
        num(){          // Defualt constructor
            count++;
            cout<<"This is the time when my constructor is called for object number "<<count<<endl;
        }

        ~num(){         // By Defualt destructor
            cout<<"This is the time when my destructor is called for object number "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;

    return 0;
}