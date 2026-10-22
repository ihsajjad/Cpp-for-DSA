#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void hello()
    {
        cout << "Hello from " << this->name << endl;
    }
    void total()
    {
        cout << "Math = " << this->math << "\nEnglish = " << this->english << "\nTotal = " << this->math + this->english << endl;
    }
};

class Crickter
{
public:
    int jersey_no;
    string country;
};

int main()
{
    Student sajjad("Sajjad Hossen", 31, 97, 88);
    // sajjad.total();
    Student rakib("Rakib Ahmed", 9, 87, 67);
    // rakib.total();
    Student sakib("Shakib Ahmed", 2, 99, 99);
    // sakib.total();

    // if (sajjad.math > rakib.math && sajjad.math > sakib.math)
    //     sajjad.total();
    // else if (rakib.math > sakib.math)
    //     rakib.total();
    // else
    //     sakib.total();

    Crickter *dhoni = new Crickter;
    dhoni->jersey_no = 70;
    dhoni->country = "INDIA";

    Crickter *kholi = new Crickter;
    *kholi = *dhoni;
    delete dhoni;

    // Crickter dhoni;
    // dhoni.jersey_no = 17;
    // dhoni.country = "INDIA";

    // Crickter kholi;
    // kholi = dhoni;

    cout << kholi->jersey_no << " " << kholi->country << endl;

    return 0;
}