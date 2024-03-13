#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a = 0, b = 0;
    cin >> n;

    string s = "7", t = "4", x;

    x = to_string(n);

    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == (s[a]) || (x[i] == t[a]))
        {
            b++;
        }
    }
    if (b == x.length())
    {
        cout << "YES";
    }
    else
    {
        if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 77 == 0 || n % 47 == 0 || n % 74 == 0)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}