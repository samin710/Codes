#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val[2], x, y = 0;

    for (int i = 0; i < 2; i++)
    {
        cin >> x;
        val[i] = x;
    }

    int b, c;

    if (val[0] % 2 == 0)
    {
        b = val[0] / 2;
    }
    if (val[0] % 2 != 0)
    {
        c = (val[0] / 2) + 1;
    }

    int ma[val[0]];

    for (int i = 1; i <= val[0]; i++)
    {
        if (val[0] % 2 == 0)
        {
            if (i % 2 != 0)
            {
                ma[y] = i;
                y++;
            }
            else
            {
                ma[b] = i;
                b++;
            }
        }
        else
        {
            if (i % 2 != 0)
            {
                ma[y] = i;
                y++;
            }
            else
            {
                ma[c] = i;
                c++;
            }
        }
    }

    cout << ma[val[1] - 1];
}