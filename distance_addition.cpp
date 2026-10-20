#include<iostream>
using namespace std;

class DB;

class DM
{
    int metres;
    float centimetres;
    public:

    void getdata()
    {
        cout<<"Enter distance in metres:";
        cin>>metres;
        cout<<"Enter distances in centimetres:";
        cin>>centimetres;

    }
    void display()
    {
        cout<<"Distance in metres:"<<metres<<endl;
        cout<<"Distance in centimetres:"<<centimetres<<endl;
    }

    friend void add(DM, DB);
};

class DB
{
    int feet, inches;

    public:
    void getdata()
    {
        cout<<"Enter distance in feet:"<<endl;
        cin>>feet;
        cout<<"Enter distance in inches:"<<endl;
        cin>>inches;
    }
    void display()
    {
        cout<<"feet"<<feet<<endl;
        cout<<"inches"<<inches<<endl;
    }

    friend void add(DM, DB);
};

void add(DM d1, DB d2)
{
    int totalcm, totalinches;
    totalcm=d1.metres*100+d1.centimetres;
    totalcm += (d2.feet*12+d2.inches)*2.45;

    cout<<"choose the unit for the result:";
    cout<<"n1.metres and centimetres";
    cout<<"n2.feet and inches";
    cout<<"Enter your choice:"<<endl;


    int choice;
    cin>>choice;

    if(choice ==1 )
    {
        DM result;
        result.metres = totalcm/100;
        result.centimetres = totalcm%100;

        cout<<"sum=";
        result.display();
    }
    else if (choice ==2)
    {
        DB result;
        totalinches = totalcm / 2.45;
        result.feet= totalinches /12;
        result.inches=totalinches % 12;

        cout<<"sum=";
        result.display();
    }
    else
    {
        cout<<"invalid choice!"<<endl;

    }
}

int main()
{
    DM d1;
    DB d2;

    d1.getdata();
    d2.getdata();

    add(d1, d2);

    return 0;
}