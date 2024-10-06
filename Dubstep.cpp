#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, o;
    cin >> s;

    int len;

    len = s.length();

    for (int i = 0; i < len;)
    {
        if (s[i] == 'W')
        {
            if (s[i + 1] == 'U')
            {
                if (s[i + 2] == 'B')
                {
                    i = i + 3;
                }
                else
                {
                    o += s[i + 1];
                    i++;
                }
            }
            else
            {
                o += s[i];
                i++;
            }
        }
        else
        {
            o += s[i];
            i++;
        }
    }
    cout << o;
}