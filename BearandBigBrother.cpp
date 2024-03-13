#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    for (int i = 1;; i++)
    {

        if ((3 * a) > (2 * b))
        {
            cout << i;
            break;
        }
        a *= 3;
        b *= 2;
    }
}