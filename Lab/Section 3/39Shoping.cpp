#include <iostream>
using namespace std;
class Shopping
{
private:
    double groceryAmount;
    double electronicAmount;
    double clothesAmount;

public:
    Shopping() : groceryAmount(0.0), electronicAmount(0.0), clothesAmount(0.0) {}
    void inputGrocery()
    {
        cout << "Enter the billing amount for grocery items: ";
        cin >> groceryAmount;
    }
    void inputElectronic()
    {
        cout << "Enter the billing amount for electronic gadgets: ";
        cin >> electronicAmount;
    }
    void inputClothes()
    {
        cout << "Enter the billing amount for clothes: ";
        cin >> clothesAmount;
    }
    void displayTotalAmount()
    {
        double totalAmount = groceryAmount + electronicAmount + clothesAmount;
        cout << "Total Billing Amount: " << totalAmount << endl;
    }
};
int main()
{
    Shopping shoppingCart;
    shoppingCart.inputGrocery();
    shoppingCart.inputElectronic();
    shoppingCart.inputClothes();
    shoppingCart.displayTotalAmount();
    return 0;
}
