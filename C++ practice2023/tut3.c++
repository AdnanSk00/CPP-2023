// C++ program to create multiple objects of a class

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:

        int roll_no;
        string name;
        float percentage;
};

int main(){
    Student std1;
    std1.roll_no = 101;
    std1.name = "AB De villiers";
    std1.percentage = 89.72;

    Student std2;
    std2.roll_no = 202;
    std2.name = "Faf du plessis";
    std2.percentage = 91.04;

    cout<<"Student 1..."<<endl;
    cout<<"Student's roll no : "<<std1.roll_no<<endl;
    cout<<"Student's name : "<<std1.name<<endl;
    cout<<"Student's percentage : "<<std1.percentage<<endl<<endl;
    
    cout<<"Student 2..."<<endl;
    cout<<"Student's roll no : "<<std2.roll_no<<endl;
    cout<<"Student's name : "<<std2.name<<endl;
    cout<<"Student's percentage : "<<std2.percentage<<endl;

    return 0;
}