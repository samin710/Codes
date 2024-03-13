#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, c;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (i == 0)
        {
            c += toupper(a[0]);
        }
        else
        {
            c += a[i];
        }
    }
    cout << c;
}