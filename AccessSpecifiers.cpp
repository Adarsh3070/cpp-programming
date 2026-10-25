#include <iostream>
using namespace std;

class Student
{
private:
    int marks;  

    void displayMarks()
    {
        cout << "Marks: " << marks << endl;
    }

public:
    void setMarks(int m)
    {
        marks = m;             
    }

    void showDetails()
    {
        displayMarks();        
    }
};

int main()
{
    Student s;

    s.setMarks(85);     
    s.showDetails();    

    return 0;
}