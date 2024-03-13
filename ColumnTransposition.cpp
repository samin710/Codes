#include <bits/stdc++.h>
using namespace std;
int main()
{
    char plaintext[115][115], x;
    int key[10], c = 0, y, ct = -1;

    cout << "Enter plaintext:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> x;
            plaintext[i][j] = x;
        }
    }

    cout << "Enter key: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> y;
        key[i] = y;
    }

    cout << "Ciphertext is: ";
    for (int i = 0; i < 4; i++)
    {
        int min = 9999;
        for (int k = 0; k < 4; k++)
        {
            if (key[k] < min)
            {
                min = key[k];
                ct = k;
            }
        }
        c = ct;
        for (int j = 0; j < 5; j++)
        {
            cout << plaintext[j][c];
        }
        key[ct] = 99999;
        ct = -1;
        c = 0;
    }
}