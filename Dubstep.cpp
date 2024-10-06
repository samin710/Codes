#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, o;
    cin >> s;

    int len, x;

    len = s.length();

    for (int i = 0; i < len;)
    {
        if (s[i] == 'W')
        {
            if (s[i + 1] == 'U')
            {
                if (s[i + 2] == 'B')
                {
                    if (i != 0 && x == 1)
                    {
                        o += " ";
                        x = 2;
                    }
                    i = i + 3;
                }
                else
                {
                    o += s[i];
                    i++;
                    x = 1;
                }
            }
            else
            {
                o += s[i];
                i++;
                x = 1;
            }
        }
        else
        {
            o += s[i];
            i++;
            x = 1;
        }
    }
    cout << o;
}