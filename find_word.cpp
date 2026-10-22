#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, target, word;
    getline(cin, s);
    cin >> target;

    int cnt = 0;
    stringstream ss(s);
    while (ss >> word)
    {
        if (word == target)
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}