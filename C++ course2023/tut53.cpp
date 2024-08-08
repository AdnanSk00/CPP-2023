// ***************************      this - Pointer      **************************

// this pointer point karta hai us object ko jis ne is[setData()] member function ko call kiya.
#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setData(int a){
            this->a = a;            // this Pointer
            // (*this).a = a;
        }
         
/*      A& setData(int a){
            this->a = a;
            
            return *this;        // For Return - Object which call this function
        }
*/        
        void getData(void){
            cout<<"The Value of a is : " <<a <<endl;
        }
};


int main(){
    // 'this' is a keyword which is a pointer which points to the object which invokes the member function.
    A a;
    a.setData(57);
    a.getData();

    return 0;
}