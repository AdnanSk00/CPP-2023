//  *******************************     Multiple Inheritance      ******************************

#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance :
// class DerivedC : visibility-mode base1, visibility-mode base2
// {
//     Class body of class "DerivedC"
// };

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};

class Base3{
    protected:
        int base3int;
    public:
        void set_base3int(int c){
            base3int = c;
        }
};

class Derived : public Base1, public Base2, public Base3{
    public:
        void show(){
            cout << "The value of Base1 is " << base1int << endl;
            cout << "The value of Base2 is " << base2int << endl;
            cout << "The value of Base3 is " << base3int << endl;
            cout << "The Sum of these values is : " << base1int + base2int + base3int << endl;
        }
};

/*
The inherited derived class will look something like this :

Data members:   Will remain
    base1int --> protected
    base2int --> protected
    base3int --> protected

Members fnctions:
    set-base1int() --> public
    set-base2int() --> public
    set-base3int() --> public
            show() --> public
*/
int main()
{
    Derived der;
    der.set_base1int(36);
    der.set_base2int(65);
    der.set_base3int(99);
    der.show();

    return 0;
}