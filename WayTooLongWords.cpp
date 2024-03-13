#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string y;
    string arr[100];

    for (int i = 0; i < x; i++)
    {
        cin >> y;
        arr[i] = y;
        if (arr[i].length() > 10)
        {
            string q = arr[i];
            cout << q[0] << q.length() - 2 << q[q.length() - 1] << endl;
        }
        else
        {
            cout << arr[i] << endl;
        }
    }
    // for (int i = 0; i < arr->length(); i++)
    // {
    //     if (arr[i].length() > 10)
    //     {
    //         string q = arr[i];
    //         cout << q[0] << q.length() - 2 << q[q.length() - 1] << endl;
    //     }
    //     else
    //     {
    //         cout << arr[i] << endl;
    //     }
    // }
}