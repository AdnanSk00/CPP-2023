#include<iostream>
using namespace std;

class practice{
    int a ;
    static int number ;

public :
    void setdata(){
        cout<<"Enter the value of 'a' "<<number + 1<<"'s time : ";
        cin>>a;
        number++;
    }
    void getdata(){
        cout<<"The value of 'a' is "<<a<<endl;
    }
    static void get_number(){                      // imp --> static
        // cout<<a;                                // imp --> a - error due to static
        cout<<"The counting of number - "<<number<<endl;
    }
};

int practice :: number ;
    
int main(){
    practice prc;
    for(int i=0; i<3; i++){
        prc.setdata();
        prc.getdata();
        practice :: get_number();                 // get_number() is static that's why access through class name.
    }


    return 0;
}