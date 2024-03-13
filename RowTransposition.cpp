#include <bits/stdc++.h>
using namespace std;
int main()
{
    char plaintext[115][115], ciphertext[115][115], x, q;
    int key[10], c, y, u = 0;

    cout << "Enter plaintext:" << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            plaintext[i][j] = x;
        }
    }

    cout << "Enter key: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> y;
        key[i] = y;
    }

    for (int i = 0; i < 5; i++)
    {
        c = key[u];
        for (int j = 0; j < 7; j++)
        {
            ciphertext[j][i] = plaintext[j][c];
        }
        u++;
    }
    cout << "Ciphertext is: ";
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << ciphertext[i][j];
        }
    }
}