#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, char> stringMap;

    stringMap['a'] = 'Q';
    stringMap['b'] = 'W';
    stringMap['c'] = 'E';
    stringMap['d'] = 'R';
    stringMap['e'] = 'T';
    stringMap['f'] = 'Y';
    stringMap['g'] = 'U';
    stringMap['h'] = 'I';
    stringMap['i'] = 'O';
    stringMap['j'] = 'P';
    stringMap['k'] = 'A';
    stringMap['l'] = 'S';
    stringMap['m'] = 'D';
    stringMap['n'] = 'F';
    stringMap['o'] = 'G';
    stringMap['p'] = 'H';
    stringMap['q'] = 'J';
    stringMap['r'] = 'K';
    stringMap['s'] = 'L';
    stringMap['t'] = 'Z';
    stringMap['u'] = 'X';
    stringMap['v'] = 'C';
    stringMap['w'] = 'V';
    stringMap['x'] = 'B';
    stringMap['y'] = 'N';
    stringMap['z'] = 'M';

    string plaintext, ciphertext;
    cout << "Enter plaintext: ";
    cin >> plaintext;

    for (int i = 0; i < plaintext.length(); i++)
    {
        for (const auto &pair : stringMap)
        {
            if (plaintext[i] == pair.first)
            {
                ciphertext = ciphertext + pair.second;
            }
        }
    }
    cout << "Ciphertext: ";
    cout << ciphertext << endl;
}