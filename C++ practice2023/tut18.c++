//  Hierarchical inheritance to get square and cube of a number program in C++

// C++ program to demonstrate example of hierarchical inheritance to get square and cube of a number :-

#include<iostream>
using namespace std;

class Number{
    private:
        int num;
    public:
        void setNumber(void){
            cout<<"Enter an integer number: ";
            cin>>num;
        }
        int returnNumber(void){
            return num;
        }
};

class Square : public Number{
    public:
        int setSquare(void){
            int num, sqr;
            num= returnNumber();
            sqr = num * num;
            return sqr;
        }
};

class Cube : public Number{
    public:
        int setCube(void){
            int num, cube;
            num = returnNumber();
            cube = num * num * num;
            return cube;
        }
};


int main(){
    Square objS;
    Cube objC;
    int sqr, cube;

    objS.setNumber();
    sqr = objS.setSquare();
    cout<<"Square of "<<objS.returnNumber()<<" is : "<<sqr<<endl;

    objC.setNumber();
    cube = objC.setCube();
    cout<<"Cube of "<<objC.returnNumber()<<" is : "<<cube<<endl;

    return 0;
}