#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, ct = 0, j = 0;
    cin >> n;
    int arr[n], out[n - 1];

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] >= arr[i])
        {
            ct = ct + 1;
        }
        else
        {
            out[j] = ct;
            ct = 0;
            j++;
        }
    }

    int m;
    m = sizeof(out) / sizeof(out[0]);

    for (int i = 0; i < m; i++)
    {
        cout<<out[i]<<" "<<endl;
    }
    
    ct = *max_element(out, out + n);
    // cout << ct;
}