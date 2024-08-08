// ********************************     Friend Functions    *******************************
#include<iostream>
using namespace std;

// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i
class Complex{
    int a, b;
        // Below line means that non member - sumComplex function is allowed to do anything with my private parts (members)
    friend Complex sumComplex(Complex o1, Complex o2);        // Declaration -  Friend Function
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){         // sumComplex is not a member function of class Complex
    Complex c3;
    c3.setNumber((o1.a + o2.a), (o1.b + o2.b));     // Function access by object(sum)
    return c3;
}


int main(){
    
    Complex c1, c2;
    c1.setNumber(1, 4);
    c1.printNumber();
    // c1.sumComplex(c1, c2);           Which is not a member function

    c2.setNumber(5, 8);
    c2.printNumber();

    cout<<"              --------"<<endl;
    
    Complex sum;
    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions :-->

1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called from the object of that class. 
   c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/