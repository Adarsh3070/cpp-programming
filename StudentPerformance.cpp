#include <iostream>
#include <string>
#include<vector>
#include<iomanip>
using namespace std;

class Student {
private:
    string name;
    int roll_number;
    vector<float> marks;

public:
    Student(string n, int r, vector<float> m) {
        name = n;
        roll_number = r;
        marks = m;
    }

    float calculate_average() {
        float total = 0;

        for (float mark : marks) {
            total += mark;
        }

        return total / marks.size();
    }

    char get_grade() {
        float average = calculate_average();

        if (average >= 90)
            return 'A';
        else if (average >= 80)
            return 'B';
        else if (average >= 70)
            return 'C';
        else if (average >= 60)
            return 'D';
        else if (average >= 50)
            return 'E';
        else
            return 'F';
    }

    void display_report() {

        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << roll_number << endl;
        cout << "Average     : " << fixed << setprecision(2)
             << calculate_average() << endl;
        cout << "Grade       : " << get_grade() << endl;
        cout << endl;
    }
};

int main() {

    Student student1("Rahul", 101, {85, 90, 78, 88, 92});
    Student student2("Priya", 102, {92, 95, 89, 94, 96});
    Student student3("Aman", 103, {72, 68, 75, 70, 74});
    Student student4("Neha", 104, {61, 65, 58, 63, 60});
    Student student5("Rohan", 105, {45, 52, 48, 50, 43});

    student1.display_report();
    student2.display_report();
    student3.display_report();
    student4.display_report();
    student5.display_report();

    return 0;
}