#include<iostream>
using namespace std;

class ATM
{
    static int totalcash;
    static int totalcards;
    int cash;
    public:
    void cashwithdraw()
    {
        cout<<"enter balance to withdraw:"<<endl;
        cin>>cash;

        if(cash >0 && cash<= totalcash)
        {
            totalcash -=cash;
            totalcards++;
            cout<<"cash withdrawn:"<<cash<<endl;
            cout<<"available cash after withdraw:"<<totalcash<<endl;

        }
        else
        {
            cout<<"insufficient balance"<<endl;

        }
    }
    void cashdisplay()
    {
        cout<<"total cash available:"<<totalcash<<endl;
        cout<<"total cards today:"<<totalcards<<endl;
        
    }
    static void ATMcash()
    {
        cout<<"total cash available in ATM:"<<totalcash<<endl;
    }
};
int ATM::totalcash = 10000;
int ATM::totalcards = 0;

int main()
{
    ATM a[3];
    int choice,i;

    do
    {
        cout<<"\n1.withdraw cash";
        cout<<"\n2.display cash";
        cout<<"\n3.Display ATM cash";
        cout<<"\n4.exit";
        cout<<"\nenter choice:";
        cin>>choice;

        if(choice == 1)
        {
            cout<<"select object (0-2):";
            cin>>i;

            if(i>=0 && i<3)
            a[i].cashwithdraw();
        else
        cout<<"invalid object number!"<<endl;
        }
        else if (choice == 2)
        {
            cout<<"select object(0-2):";
            cin>>i;
            if(i>=0 && i<3)
            a[i].cashdisplay();
        else
        cout<<"invalid object number:";
        }
        else if (choice == 3)
        {
            ATM::ATMcash();
        }
        else if(choice == 4)
        {
            cout<<"thank you"<<endl;
        }
        else
        {
            cout<<"invalid choice"<<endl;
        }
    }
    while(choice != 4);
    return 0;
}