#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any alphabet : ";
    cin >> ch;
    if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
    {
        cout << "Alphabet";
    }
    else if(ch >= 48 && ch<=57){
        cout << "It is digit";
    }
    else{
        cout << "It is special symbol";
    }

        return 0;
}