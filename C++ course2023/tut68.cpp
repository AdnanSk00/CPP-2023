// ************************  Member Function Templates & Overloading Template Functions  ***********************

#include<iostream>
using namespace std;

template <class T>
class Adii{
    public:
        T data;

        Adii(T a){
            data = a;
        }
        
        void display();     // Function Declaration --> Aage banane wala hu
};

template <class T>           
void Adii<T> :: display(){          // Outside the class -->  not inline function 
    cout<<data<<endl;
}


void func(int a){
    cout<<"I am first func(): "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templatised func(): "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templatised func1(): "<<a<<endl;
}


int main(){
    Adii<float> a(4.5);
    // Adii<char> a('O');
    // Adii<int> a(57);
    
    // cout<<a.data<<endl;
    // a.display();

    func(4);           // Exact match takes the highest priority --> Ambiguity resolution
    // func1(4);          // Exact match takes the highest priority
    
    
    return 0;
}