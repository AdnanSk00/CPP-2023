// REPLACE AND SORT USING CLASS :-

#include<iostream>
using namespace std;

class sort{
    private :
        int num[30];
    public:
        void getdata();
        void putdata();
};

void sort :: getdata(){
    int i, j, k;
    cout<<"enter 10 nos: ";
    for(i=0; i<10; i++){
        cin>>num[i];
    }
    for(i=0; i<9; i++){
        for(j = i+1; j<10; j++){
            if(num[i] > num[j]){
                k = num[i];
                num[i] = num[j];
                num[j] = k;
            }
        }
    }
}

void sort :: putdata(){
    int k;
    for(k = 0;k<10;k++){
        cout<<num[k]<<endl;
    }
}


int main(){
    sort s;
    s.getdata();
    cout<<endl;
    s.putdata();

    return(0);
}