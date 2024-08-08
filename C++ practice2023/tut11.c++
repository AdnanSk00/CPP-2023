// C++ code to print odd numbers in a range using class and object approach

#include<iostream>
using namespace std;

class IsOdd{
    private:
        int start, end;
    public:
        void setRange(){
            cout<<"Enter Range: ";
            cin>>start;
            cout<<"to ";
            cin>>end;
        }
        void isOdd(){
            int index;
            cout<<"Odd Numbers in the Range "<<start<<" to "<<end<<" are : "<<endl;

            for(index = start; index<=end; index++){
                if(index % 2 != 0){
                    cout<<index<<" ";
                }
            }
        }
};


int main(){
    
    IsOdd O;
    O.setRange();
    O.isOdd();

    return 0;
}