#include <iostream>
using namespace std;

int main()
{
    float bagPrice;
    int bagQuantity;

    float headphonesPrice;
    int headphonesQuantity;

    float mousePrice;
    int mouseQuantity;

    float discount;

    float bagCost;
    float headphonesCost;
    float mouseCost;
    float total;
    float discountAmount;
    float finalBill;
    float saved;

    cout << "Enter laptop bag price: ";
    cin >> bagPrice;

    cout << "Enter laptop bag quantity: ";
    cin >> bagQuantity;

    cout << "Enter headphones price: ";
    cin >> headphonesPrice;

    cout << "Enter headphones quantity: ";
    cin >> headphonesQuantity;

    cout << "Enter mouse price: ";
    cin >> mousePrice;

    cout << "Enter mouse quantity: ";
    cin >> mouseQuantity;

    cout << "Enter discount percentage: ";
    cin >> discount;

    bagCost = bagPrice * bagQuantity;
    headphonesCost = headphonesPrice * headphonesQuantity;
    mouseCost = mousePrice * mouseQuantity;

    total = bagCost + headphonesCost + mouseCost;

    discountAmount = total * discount / 100;

    finalBill = total - discountAmount;

    saved = discountAmount;

    cout << "\n========== SHOPPING BILL ==========\n";

    cout << "Laptop Bag: Rs. " << bagCost << endl;
    cout << "Headphones: Rs. " << headphonesCost << endl;
    cout << "Mouse: Rs. " << mouseCost << endl;

    cout << "Total Before Discount: Rs. " << total << endl;
    cout << "Discount Amount: Rs. " << discountAmount << endl;
    cout << "Final Bill: Rs. " << finalBill << endl;
    cout << "Amount Saved: Rs. " << saved << endl;

    cout << "===================================\n";

    return 0;
}
