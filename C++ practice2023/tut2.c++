// C++ program to create an object of a class and access class attributes 

#include<iostream>
#include<string>
using namespace std;

class Student{
    int rollNo;;
    string stdName;
    float perc;
    public:

    void set_rollNo(){
        cout<<"Enter your roll no - ";
        cin>>rollNo;
    }
    void set_stdName(){
        // stdName = "Adnan Shiakh";
        cout<<"Please enter your good name - ";
        cin>>stdName;
    }
    void set_percentage(){
        cout<<"Enter your percentage - ";
        cin>>perc;
    }
    void display(){
        cout<<"\nStudent's roll no "<<rollNo<<endl;
        cout<<"Student's name : "<<stdName<<endl;
        cout<<"Student's percentage : "<<perc<<"%";
    }
};

int main(){
    Student std;
    std.set_rollNo();
    std.set_stdName();
    std.set_percentage();
    std.display();

    return 0;
}