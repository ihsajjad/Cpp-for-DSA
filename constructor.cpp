#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r, cls = c, gpa = g;
    }
};

int main()
{
    Student rakib(45, 5, 2.92);
    Student sakib(2, 5, 5.00);

    cout << rakib.roll << " " << rakib.cls << " " << rakib.gpa << endl;
    cout << sakib.roll << " " << sakib.cls << " " << sakib.gpa << endl;
    return 0;
}