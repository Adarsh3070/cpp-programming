#include<iostream>
using namespace std;

class Rectangle
{
    float length;
    float breadth;
    public:
    float getdata()
    {
        cout<<"Enter length of ractangle: ";
        cin>>length;
        cout<<"Enter breadth of rectangle: ";
        cin>>breadth;  
    }
    void display()
    {
        cout<<"length of rectangle: "<<length<<endl;
        cout<<"breadth of rectangle: "<<breadth<<endl;
    }
    friend float calculateArea(Rectangle r);
    friend float calculateperimeter(Rectangle r);
    friend Rectangle compareArea(Rectangle r1, Rectangle r2);
};

float calculateArea(Rectangle r)
{
    return r.length*r.breadth;
}

float calculateperimeter(Rectangle r)
{
    return 2*(r.length+r.breadth);
}

Rectangle compareArea(Rectangle r1, Rectangle r2)
{
    if(calculateArea(r1)>calculateArea(r2))
    return r1;
    else
    return r2;
}

int main()
{
    Rectangle plot1, plot2, largeplot;
    cout<<"Enter dimension of plot1"<<endl;
    plot1.getdata();
    cout<<"Enter dimension of plot2"<<endl;
    plot2.getdata();

    plot1.display();
    cout<<"Area of plot1: "<<calculateArea(plot1)<<endl;
    cout<<"perimeter of plot1: "<<calculateperimeter(plot1)<<endl;

    plot2.display();
    cout<<"Area of plot2: "<<calculateArea(plot2)<<endl;
    cout<<"perimeter of plot2:"<<calculateperimeter(plot2)<<endl;

    float area1=calculateArea(plot1);
    float area2=calculateArea(plot2);

    if(area1 == area2)
    {
        cout<<"Both plots have same size"<<endl;
    }
    else
    {
        largeplot=compareArea(plot1, plot2);

        largeplot.display();
        cout<<calculateArea(largeplot)<<endl;

        if(area1 > area2)
        
            cout<<"plot1 is larger"<<endl;
        else
            cout<<"plot2 is larger"<<endl;
    }
    return 0;
}