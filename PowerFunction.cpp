#include <iostream>
using namespace std;

double power(double n, int p = 2) {
    double result = 1;

    for (int i = 1; i <= p; i++) {
        result = result * n;
    }

    return result;
}

int main() {
    double n;
    int p;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Enter the power: ";
    cin >> p;

    cout << n << " raised to the power " << p << " = "<< power(n, p) << endl;
    cout << n << " squared = " << power(n) << endl;

    return 0;
}