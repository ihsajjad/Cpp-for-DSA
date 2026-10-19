#include <bits/stdc++.h>
using namespace std;

int *p;

void fun()
{
    // int x = 99;
    int *x = new int;
    *x = 299;
    p = x;

    cout << "Fun -> " << *p << endl;
}

int main()
{
    // int x = 10;
    // int *p = new int;
    // *p = 1000;
    // cout << *p << endl;

    fun();
    cout << "Main -> " << *p << endl;

    return 0;
}