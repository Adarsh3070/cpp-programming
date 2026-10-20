#include<iostream>
using namespace std;

class Transaction;
class Account 
{
    private:
    string accountHolderName;
    int accountNumber;
    float balance;

    public:
    void InitializeData(string name, int number, float amount)
    {
        accountHolderName = name;
        accountNumber = number;
        balance = amount;
    }

    void displayAccount()
    {
        cout<<"Account Holder:" <<accountHolderName<<endl;
        cout<<"Account Number:"<<accountNumber<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
    friend void deposit(Account &, float);
    friend void withdraw(Account &, float);
    friend void checkBalance(Account &);
};
class Transaction
{
    public:
    void performDeposit(Account &a, float amount)
    {
        deposit(a, amount);
    }
    void performWithdraw(Account &a, float amount)
    {
        withdraw(a, amount);
    }
    void performCheckBalance(Account &a)
    {
        checkBalance(a);
    }
};
void deposit(Account &a, float amount)
{
    if(amount > 0)
    {
        a.balance += amount;
        cout <<"Deposit successfull!" <<endl;
        cout<<"update Balance:"<<a.balance<<endl;
    }
    else
    {
        cout<<"Invalid deposit amount!"<<endl;
    }
}

void withdraw(Account &a, float amount)
{
    if (amount <= 0)
    {
        cout<<"Invalid withdrawal amount!"<<endl;
    }
    else if (a.balance >= amount)
    {
        a.balance -= amount;
        cout<<"withdrawal successful"<<endl;
        cout<<"updated balance"<<a.balance<<endl;
    }
    else
    {
        cout<<"insufficient balance"<<endl;
    }
}

void checkBalance(Account &a)
{
    cout<<"Current Balance:"<<a.balance<<endl;
}

int main()
{
    Account acc;
    Transaction t;

    string name;
    int number;
    float amount, openingBalance;
    int choice;

    cout<<"Enter account holder name:";
    cin>>name;

    cout<<"enter account number: ";
    cin>>number;

    cout<<"Enter opening balance: ";
    cin>> openingBalance;

    if (openingBalance < 0)
    {
        cout<<"Invalid opening balance"<<endl;
        return 0;
    }
    acc.InitializeData(name, number, openingBalance);
    acc.displayAccount();

    do {
        cout<<"1.Deposite"<<endl;
        cout<<"2.withdraw"<<endl;
        cout<<"3.check Balance"<<endl;
        cout<<"4.Display Account"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter choice:";
        cin>> choice;

        switch (choice)
        {
            case 1:
            cout<<"Enter deposite amount:";
            cin>>amount;
            t.performDeposit(acc, amount);
            break;

            case 2:
            cout<<"Enter withwrawal amount: ";
            cin>>amount;
            t.performWithdraw(acc, amount);
            break;

            case 3:
            t.performCheckBalance(acc);
            break;

            case 4:
            acc.displayAccount();
            break;

            case 5:
            cout<<"Thank you" <<endl;
            break;

            default:
            cout<<"Invalid choice"<<endl;

        }
    }
    while (choice != 5);
    return 0;
}