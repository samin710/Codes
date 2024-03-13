#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ct_l = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            ct_l++;
        }
        if (ct_l==7)
        {
            break;
        }
        if (s[i] != s[i + 1])
        {
            ct_l=1;
        }
    }

    if (ct_l >= 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}