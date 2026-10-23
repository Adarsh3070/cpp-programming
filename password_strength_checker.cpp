#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string password;
    int uppercase = 0, lowercase = 0, digits = 0, special = 0;

    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < password.length(); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            uppercase++;
        }
        else if (password[i] >= 'a' && password[i] <= 'z') {
            lowercase++;
        }
        else if (password[i] >= '0' && password[i] <= '9') {
            digits++;
        }
        else {
            special++;
        }
    }

    cout << "\nUppercase Letters: " << uppercase << endl;
    cout << "Lowercase Letters: " << lowercase << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << special << endl;

    int types = 0;

    if (uppercase > 0)
        types++;
    if (lowercase > 0)
        types++;
    if (digits > 0)
        types++;
    if (special > 0)
        types++;

    if (password.length() < 6 || types == 1) {
        cout << "Password Strength: Weak" << endl;
    }
    else if (password.length() >= 8 &&
             uppercase > 0 &&
             lowercase > 0 &&
             digits > 0 &&
             special > 0) {
        cout << "Password Strength: Strong" << endl;
    }
    else {
        cout << "Password Strength: Moderate" << endl;
    }

    return 0;
}