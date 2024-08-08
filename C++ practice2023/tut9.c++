// C++ code to convert the temperature from Celsius to Fahrenheit using class and object approach

#include<iostream>
using namespace std;

class CelsiusToFahrenheit{
    private:
        float celsius;
    public:
        void setTemperature(){
            cout<<"Enter Temperature in Celsius: ";
            cin>>celsius;
        }
        double C_to_F(){
            float fahrenheit;
            fahrenheit = ((celsius * 9)/5) + 32;
            return fahrenheit;
        }
};

int main(){
    CelsiusToFahrenheit C;

    float temperature;
    
    C.setTemperature();
    temperature = C.C_to_F();
    cout<<"Temperature in Fahrenheit : "<<temperature;

    return 0;
}
