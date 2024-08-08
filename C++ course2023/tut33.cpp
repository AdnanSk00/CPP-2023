//  *******************     Dynamic Initialization of Objects Using Constructor    ******************

// Means - Object bante hi without confusion constructor execute hone ke liye blank constructor banaya gaya hai.  
// 'Object' ko banne ke baad choose karna hoga ke use kaonsa constructor chalana hai, jo ke parameter paas hone ke baad hi decide hoga.

#include <iostream>
using namespace std;

class BankDeposit
{
    int principalAmount;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){};
    BankDeposit(int pA, int y, float r); // iR can be a value like 0.04
    BankDeposit(int pA, int y, int r);   // iR can be a value like 14
    void show();
};

BankDeposit ::BankDeposit(int pA, int y, float r)
{
    principalAmount = pA;
    years = y;
    interestRate = r;
    returnValue = principalAmount;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int pA, int y, int r)
{
    principalAmount = pA;
    years = y;
    interestRate = float(r) / 100;  // interest in percent(%)
    returnValue = principalAmount;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << "Principal amount was - " << principalAmount << ". "
         << "Return value after " << years
         << " years is " << returnValue << endl
         << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int pA, y;
    float r;
    int R;

    // bd3.show();
    cout << "Enter the value of pA, y and ir : " << endl;
    cin >> pA >> y >> r;
    bd1 = BankDeposit(pA, y, r);
    bd1.show();

    cout << "Enter the value of pA, y and iR : " << endl;
    cin >> pA >> y >> R;
    bd2 = BankDeposit(pA, y, R);
    bd2.show();

    return 0;
}