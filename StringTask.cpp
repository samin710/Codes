#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, r,f;
    cin >> s;
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'A' && s[i] != 'a' && s[i] != 'O' && s[i] != 'o' && s[i] != 'E' && s[i] != 'e' && s[i] != 'U' && s[i] != 'u' && s[i] != 'I' && s[i] != 'i' && s[i] != 'Y' && s[i] != 'y')
        {
            r += s[i];
            f += '.';
            f += towlower(r[j]);
            j++;
        }
    }
    cout << f;
}
