// ****************************     PRIVATE, PUBLIC & PROTECTED     ***************************

#include<iostream>
using namespace std;

class Base{
    protected:      // As it is Private but 'Inherited'
        int a;
    private:
        int b;
};

/* For a protected member:
                            Public derivation     Private derivation     Protected derivation
    1. Private members       Not Inherited         Not Inherited          Not Inherited
    2. Protected members     Protected             Private                Protected
    3. Public members        Public                Private                Protectdd
*/

class Derived : protected Base{


};



int main(){
    Base b;
    Derived d;
    // cout<<d.a;      // Will not work since a is protected in both base as well as derived class

    return 0;
}