#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, c, d;
    cin >> s;
    int ct_l = 0;
    for (int i = 0; i < s.length(); i++)
    {
        c += tolower(s[i]);
        if (c[i] == s[i])
        {
            ct_l++;
        }
    }
    float a = s.length();

    if (ct_l >= ceil(a / 2))
    {
        cout << c;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            d += toupper(s[i]);
        }
        cout << d;
    }
}