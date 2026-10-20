#include<iostream>
using namespace std;

class product
{
    string name;
    float price;
    float discountpercentage;

    public:
    void getdata()
    {
        cout<<"enter product name: ";
        cin>>name;
        cout<<"enter product price: ";
        cin>>price;
        cout<<"enter product discount percentage: ";
        cin>>discountpercentage;
    }
    void displayproduct()
    {
        cout<<"product name:"<<name<<endl;
        cout<<"product price:"<<price<<endl;
        cout<<"product discount percentage:"<<discountpercentage<<endl;

    }
    friend float applyDiscount(product p);
};
float applyDiscount(product p)
{
    float discountamount=(p.price*p.discountpercentage)/100;
    float finalprice=p.price-discountamount;
    return finalprice;
}

int main()
{
    int n;
    cout<<"enter no of products: ";
    cin>>n;
    product p[n];
    for(int i=0; i<n; i++)
    {
        p[i].getdata();
    }
    for(int i=0; i<n; i++)
    {
        p[i].displayproduct();
        float finalprice=applyDiscount(p[i]);
        cout<<"final price after discount: "<<finalprice<<endl;
    }
    return 0;
}