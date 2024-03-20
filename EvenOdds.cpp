#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input[3], x, ct = 0, mid, y = 0;

    for (int i = 0; i < 2; i++)
    {
        cin >> x;
        input[i] = x;
    }
    int n = input[0];
    int s = input[1] - 1;
    int final[n];
    if (n % 2 != 0)
    {
        mid = (n / 2) + 1;
    }
    else
    {
        mid = n / 2;
    }

    for (int i = 1; i <= n; i++)
    {
        if ((i % 2 != 0) && ct <= mid)
        {
            final[ct] = i;
            ct++;
        }
        else
        {
            final[mid] = i;
            mid++;
        }
    }

    cout << final[s];
}
