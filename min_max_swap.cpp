#include <iostream>
// #include <algorithm>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    cout << x << " " << y << endl;
    cout << "Initial values : x = " << x << ", y = " << y << endl;

    cout << "Min = " << min(x, y) << endl;
    cout << "Max = " << max(x, y) << endl;
    swap(x, y);
    cout << "Swap : x = " << x << ", y = " << y << endl;
    return 0;
}