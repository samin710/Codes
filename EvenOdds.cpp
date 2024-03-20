#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input[3], x, ct = 0;

    for (int i = 0; i < 2; i++)
    {
        cin >> x;
        input[i] = x;
    }
    int n = input[0];
    int s = input[1] - 1;
    int final[n];

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            final[ct] = i;
            ct++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            final[ct] = i;
            ct++;
        }
    }
    cout << final[s];
}
