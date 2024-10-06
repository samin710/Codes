#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, f, s, t, fo, fi,si, x;

    cin >> a >> b >> c;

    f = a * b * c;
    s = (a * b) + c;
    t = (a + b) * c;
    fo = a * (b + c);
    fi = a + (b * c);
    si = a + b + c;

    x = max(f, s);
    x = max(x, t);
    x = max(x, fo);
    x = max(x, fi);
    x = max(x, si);

    cout<<x;
}