#include<iostream>
using namespace std;

// ****************************   STRUCTURE   ***************************
typedef struct employee                         // 'typedef' struct public {
{
    int eId;
    char favChar;
    float salary;
} ep;                                            //               } 'pub' ;

// ****************************   UNION   ***************************
typedef union money                         
{
    int rice;
    char car;
    float pounds;
}mn;                    


// ****************************   ENUM   ***************************
int main(){
    enum Meal{breakfast, snacks, lunch, luncheon, supper, dinner};
    Meal m1=supper;
    cout<<(m1==4)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    union money m2;
    // mn m1;
    m2.car='c';
    m2.rice=57;
    cout<<m2.car<<endl;                    // Access/Execute any one variable
    // cout<<m2.rice<<endl;                // Access/Execute any one variable
    
    ep adii;
    struct employee addu;    //or      // ep addu;
    // struct employee addy;            // ep addy;
    
    adii.eId = 1;
    addu.eId = 3;
    adii.favChar = 'a';
    adii.salary= 120000000;
    cout<<" The value is : "<<adii.eId<<endl;
    cout<<" The value is : "<<addu.eId<<endl;
    cout<<" The value is : "<<adii.favChar<<endl;
    cout<<" The value is : "<<adii.salary<<endl;

    return 0;
}