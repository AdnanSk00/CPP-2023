// ***************************        CLASSES & OBJECTS       **************************
// OOPs - Classes and Objects

    // C++ -> initially called - C with classes by stroustroup
    // class -> extension of structures (in C)
    // structures had limitations :-
    // - members are public
    // - No methods
    // classes -> structures + more...
    // classes -> can have methods and properties
    // classes -> can make few members as private & few as public
    // strucures in C++ are typedefed
    // you can declare objects along with the class declaration like this :-
    /* class Employee{
        // Class definition
    } adii, harry, addu; */
    // adii.salary = 8 makes no sense if salary is private

// ***********************  Nesting of member functions  **********************

#include <iostream>
// #include <string>
using namespace std;

class binary
{
//private:
    // string s;           // By default - class member is private

public:
    string s;
    void read(void);                // Declaration - Aage banane wala hu
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
}b;                        // Object of class(binary) -> b

void binary :: read(void){
    cout<<"Enter a binary number : ";
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
        cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void)
{
    chk_bin();      // Nesting of member function
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    // read();
    // chk_bin();
    // ones_compliment();
    cout<<"Displaying 1's complement of given number : ";
    for(int i=0; i<s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}


int main()
{
    // binary b;                       // Object of class(binary) -> b
    b.read();
    // b.chk_bin();
    // b.display();
    b.ones_compliment();
    b.display();
    
    return 0;
}