#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c, d;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a.length(); i++)
    {
        c += tolower(a[i]);
        d += tolower(b[i]);
    }

    for (int i = 0; i < a.length(); i++)
    {
        if (c[i] > d[i])
        {
            cout << 1;
            break;
        }
        else if (c[i] < d[i])
        {
            cout << -1;
            break;
        }
        if (c == d)
        {
            cout << 0;
            break;
        }
    }
}