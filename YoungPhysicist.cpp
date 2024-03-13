#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, result = 0;
    cin >> n;
    int arr[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            arr[i][j] = x;
        }
    }

        for (int j = 0; j < 3; j++)
        {
            if (result == 0){
                for (int i = 0; i < n; i++)
                {
                    result = result + arr[i][j];
                }
            }

        }

    if (result == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}