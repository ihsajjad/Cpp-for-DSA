#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    // Student rakib;
    // char temp[100] = "Rakib";
    // strcpy(rakib.name, temp);
    // rakib.roll = 31;
    // rakib.gpa = 2.93;

    // cout << rakib.name << " " << rakib.roll << " " << rakib.gpa << endl;

    Student a, b;

    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << ' ' << a.roll << ' ' << a.gpa << endl;
    cout << b.name << ' ' << b.roll << ' ' << b.gpa << endl;
    return 0;
}