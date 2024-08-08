// ********************************     VIRTUAL BASE CLASS     *******************************

#include<iostream>
using namespace std;
/*
Student --> Test
Student --> Sports
   Test --> Result
 Sports --> Result
*/

class Student{
    protected:
        int roll_no;
    public:
        void set_no(int a){
            roll_no = a;
        }

        void print_number(void){
            cout << "Your roll number is : "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m, float p){
            maths = m;
            physics = p;
        }

        void print_marks(void){
            cout << "Your Result is here -->"<<endl
                 << "Maths : "<<maths<<endl
                 << "Physics : "<<physics<<endl;
        }
};

class Sports : public virtual Student{
    protected:
        float score;
    public:
        void set_score(float scr){
            score = scr;
        }

        void print_score(void){
            cout << "Your PT Score is : "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout << "Your Total Score is : "<<total<<endl;
        }
};


int main(){
    Result Adii;
    Adii.set_no(57);
    Adii.set_marks(95.2, 78.9);
    Adii.set_score(93);
    Adii.display();

    return 0;
}