#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, x, count = 0;
    cin >> n >> k;

    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    for (int i = 1; i <= n; i++)
    {
        if ((arr[i] >= arr[k]) && (arr[i] > 0))
        {
            count++;
        }
    }
    cout << count << endl;
}