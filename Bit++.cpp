#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;

    int n, count = 0;
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == "X++" || x == "++X")
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    cout << count << endl;
}