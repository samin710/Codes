#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char y;
    int x = 2;
    for (int i = 0; i < s.length(); i = i + 2)
    {
        for (int j = x; j < s.length(); j=j+2)
        {
            if (s[j] < s[i])
            {
                y = s[i];
                s[i] = s[j];
                s[j] = y;
            }
        }
        x+=2;
    }
    cout<<s;
}