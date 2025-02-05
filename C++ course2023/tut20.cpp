#include <iostream>
using namespace std;
void name()
{
    cout << "Shaikh Mohd Adnan Salim" << endl;
}
void dob()
{
    cout << " 1st November 2003 " << endl;
}
void place()
{
    cout << "Live in JALGAON, Maharashtra" << endl;
}
void college()
{
    cout << "G.H. Raisoni Institute of Engineering & Business Management Jalgaon" << endl;
}
void age()
{
    cout << "Age = 19" << endl;
}
int main()
{
    int i;
    cout << "     'BIODATA'    \n1. Name\n2. Date of Birth\n3. Place\n4. College\n5. Age" << endl;
    for (int j = 1; j <= 5; j++)
    {
        cout << "you can select any one option : ";
        cin >> i;
        switch (i)
        {
        case 1:
            name();
            break;
        case 2:
            dob();
            break;
        case 3:
            place();
            break;
        case 4:
            college();
            break;
        case 5:
            age();
            break;
        }
        if (j == 5)
        {
            cout << ".......Thank you......." << endl;
        }
        if (i < 1 || i > 5)
        {
            cout << "You selected different option, Try again" << endl;
        }
    }

    return 0;
}