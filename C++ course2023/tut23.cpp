#include <iostream>
using namespace std;
// **********************    Using Arrays in Classes     *********************

class Shop
{
    int itemId[100]; // By default - private :
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
} dukaan; // Object --> dukaan

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 <<" : ";
    cin >> itemId[counter];
    cout << "Enter Price of your item : ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout <<endl<< "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    // Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}
