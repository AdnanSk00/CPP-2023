// C++ code to print prime numbers in a range using class and object approach

#include<iostream>
using namespace std;

class IsPrime{
    private:
        int start, end;
    public:
        void setRange(){
            cout<<"Enter Range: ";
            cin>>start;
            cout<<"to ";
            cin>>end;
        }
        void isPrime(){
            int index_1, index_2;
            cout<<"Prime Numbers in the range "<<start<<" to "<<end<<" are :"<<endl;

            for(index_1 = start; index_1 <= end; index_1++){
                int check = 0;
                for(index_2 = 2; index_2 < index_1; index_2++){
                    if(index_1 % index_2 == 0){
                        check++;
                        break;
                    }
                }
                if(check == 0){
                    cout<<index_1<<" ";
                }
            }
        }
};


int main(){
    IsPrime P;

    P.setRange();
    P.isPrime();

    return 0;
}