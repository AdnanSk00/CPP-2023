// C++ program to read and print students information using two classes and simple inheritance

#include<iostream>
using namespace std;

class std_basic_info{
    private:
        char name[30];
        int age;
        char gender;
    public:
        void setBasicInfo(void);
        void putBasicInfo(void);
};

void std_basic_info :: setBasicInfo(void){
    cout<<"Enter Student's basic information : "<<endl;
    cout<<"Name?: ";
    cin>>name;
    cout<<"Age?: ";
    cin>>age;
    cout<<"Gender?: ";
    cin>>gender;
}

void std_basic_info :: putBasicInfo(void){
    cout<<endl<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Gender: "<<gender<<endl;
}

class std_result_info : public std_basic_info{
    private:
        float totalM;
        float perc;
        char grade;
    public:
        void setResultInfo(void);
        void putResultInfo(void);
};

void std_result_info :: setResultInfo(void){
    cout<<"Enter student's result information : "<<endl;
    cout<<"Total Marks?: ";
    cin>>totalM;
    perc = (float)((totalM * 100)/500);
    cout<<"Grade?: ";
    cin>>grade;
}

void std_result_info :: putResultInfo(void){
    cout<<"Total Marks: "<<totalM<<endl<<"Percentage: "<<perc<<endl<<"Grade: "<<grade<<endl;
}


int main(){
    std_result_info std;
    std.setBasicInfo();
    std.setResultInfo();
    
    std.putBasicInfo();
    std.putResultInfo();

    return 0;
}



