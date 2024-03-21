#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;

    cin >> a >> b;

    if (a % 2 == 0)
    {
        c = a / 2;
    }
    else
    {
        c = (a / 2) + 1;
    }
    if (b <= c)
    {
        cout << (b * 2) - 1;
    }
    else
    {
        cout << 2 * (b - c);
    }
}
