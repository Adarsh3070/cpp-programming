#include <iostream>
using namespace std;

int main() {
    double price;
    double total = 0;
    double discount = 0;
    double finalBill;

    while (true) {
        cout << "Enter item price (0 to checkout): ";
        cin >> price;

        if (price == 0) {
            break;
        }

        if (price < 0) {
            cout << "Invalid price! Skipped." << endl;
            continue;
        }

        total += price;
    }

    if (total > 5000) {
        discount = total * 0.10;
    }

    finalBill = total - discount;
    
    cout << "\nTotal Bill (before discount):" << total << endl;
    cout << "Discount Applied:" << discount << endl;
    cout << "Final Bill:" << finalBill << endl;

    return 0;
}