#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;

    int in[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        in[i] = x; 
    }

    std::sort(in, in+n);

    for (int i = 0; i < n; i++)
    {
        cout<<in[i]<<" ";
    }
    
}