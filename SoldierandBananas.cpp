#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, t, total = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        t = k * i;
        total = total + t;
    }
    if (total > n)
    {
        cout << total - n;
    }
    else
    {
        cout << 0;
    }
}