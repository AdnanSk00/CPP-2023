//  *******************************     Multilevel Inheritance      ******************************

#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student :: set_roll_number(int r){
    roll_number = r;
}

void Student :: get_roll_number(void){
    cout<<"Your roll number is : "<<roll_number<<endl;
}


class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m, float p){
    maths = m;
    physics = p;
}

void Exam :: get_marks(){
    cout<<"The marks obtained in Maths are : "<<maths<<endl;
    cout<<"The marks obtained in Physics are : "<<physics<<endl;
}


class Result : public Exam{
    float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout<<"Your Result is : "<<(maths + physics)/2<<"%"<<endl;
        }
};


int main(){
    /*
    Notes :
        1. If we are inheriting B from A & C from B : [ A --> B --> C ]
        2. A is the base class for B and B is the base class for C
        3. A --> B --> C  is called Inheritance Path
    */
    Result adii;
    adii.set_roll_number(57);
    adii.set_marks(95 , 90.5);
    adii.display_result();

    return 0;
}