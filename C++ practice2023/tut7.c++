// C++ Code to find the largest number among three numbers using class and object approach

#include<iostream>
using namespace std;

class LargestNumber{
    private:
        int number_1, number_2, number_3, c;
    public:
        void largest(int n_1, int n_2, int n_3){
            // number_1 = n_1;
            // number_2 = n_2;
            // number_3 = n_3;
            // if((number_1>number_2)&&(number_1>number_3)){
            //     cout<<number_1<<" is greater than "<<number_2<<" & "<<number_3<<endl;
            // }
            // else if((number_2>number_1)&&(number_2>number_3)){
            //     cout<<number_2<<" is greater than "<<number_1<<" & "<<number_3<<endl;
            // }
            // else{
            //     cout<<number_3<<" is greater than "<<number_1<<" & "<<number_2<<endl;
            // }
            c = (n_1>n_2) ? (n_1>n_3 ? n_1:n_3) : (n_2>n_3 ? n_2:n_3);
            cout<<c<<" is greater";
        }
};
 
int main(){
    LargestNumber L;

    int n_1, n_2, n_3;
    cout<<"Enter 1st Number: ";
    cin>>n_1;
    cout<<"Enter 2nd Number: ";
    cin>>n_2;
    cout<<"Enter 3rd Number: ";
    cin>>n_3;

    L.largest(n_1, n_2, n_3);
    return 0;
}
