// ***************************      Templates with Multiple Parameters      ************************** 

#include<iostream>
using namespace std;
/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS (ONE, TWO OR MORE THAN TWO) :-

template < class T1, class T2...(COMMA SEPERATED) >
class class-name{
    // Body
}; 
*/

template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<this->data1<<endl<<this->data2;
        }
};


int main(){
    // myClass <int, float> obj(7, 3.14);
    myClass <float, char> obj(2.69,'U');
    // myClass <char, double> obj('X', 79.99);
    obj.display();

    return 0;
}