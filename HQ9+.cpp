#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin >> p;

    for (int i = 0; i < p.length(); i++)
    {
        if ((p[i] == 'H') || (p[i] == 'Q') || (p[i] == 9) || (p[i] == '+'))
        {
            cout << "YES";
            break;
        }
        if (i == p.length()-1)
        {
            cout << "NO";
            break;
        }
    }
}