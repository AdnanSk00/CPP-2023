// **************************     Class Templates with Default Parameters     ************************ 

#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Adii{
    public:
        T1 a;
        T2 b;
        T3 c;
        
        Adii(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};


int main(){
    Adii < > A(4, 3.14, 'a');                           // < > --> Default data types
    A.display();
    
    cout<<endl;

    // Adii <float, char, char> B('c', 'Z', 'A');         // <...> --> Passing parameters as data types
    Adii <float, char, char > B(01.24, 'Z', 'A');       // <...> --> Passing parameters as data types
    B.display();

    return 0;
}