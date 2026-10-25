#include<iostream>
using namespace std;

inline int cube(int n)
{
    return n*n*n;
}
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<"cube of "<<n<<" is "<<cube(n);
    return 0;
}