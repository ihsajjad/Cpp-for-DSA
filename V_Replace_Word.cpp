#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    while (s.find("EGYPT") != string::npos)
        s.replace(s.find("EGYPT"), 5, " ");

    cout << s << endl;
    return 0;
}

// SOLUTION 2:
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     int i = 0;
//     while (i < s.size())
//     {
//         if (i >= 4 && s.substr(i - 4, 5) == "EGYPT")
//         {
//             s.replace(i - 4, 5, " ");
//             i -= 4;
//         }

//         i++;
//     }

//     cout << s << endl;
//     return 0;
// }

// SOLUTION 3:  It was accepted. But looking for better solutions above.
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s, word;
//     cin >> s;

//     for (int i = 0; i < s.size(); i++)
//     {
//         word.push_back(s[i]);
//         // cout << word << " ";
//         if (word == "EGYPT")
//         {
//             s.replace(i - 4, 5, " ");
//             word.clear();
//             i -= 4;
//         }

//         if (word.size() == 5)
//             word.erase(0, 1);
//     }

//     cout << s << endl;
//     return 0;
// }
