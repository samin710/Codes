#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5], res;

    int x;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            arr[i][j] = x;
            if (arr[i][j] == 1)
            {
                res = abs(3 - (i + 1)) + abs(3 - (j + 1));
            }
        }
    }
    cout << res << endl;
}