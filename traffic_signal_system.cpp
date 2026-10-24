#include <iostream>
#include <string>
using namespace std;

int main() {
    string color;

    cout << "Enter traffic light color: ";
    cin >> color;

    if (color == "Red" || color == "red") {
        cout << "Stop!" << endl;
    }
    else if (color == "Yellow" || color == "yellow") {
        cout << "Get Ready!" << endl;
    }
    else if (color == "Green" || color == "green") {
        cout << "Go!" << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }

    return 0;
}