#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, map<char, map<char, char>>> stringMap;

    stringMap['a']['S']['V'] = 'Q';
    stringMap['b']['R']['Y'] = 'W';
    stringMap['c']['Q']['N'] = 'E';
    stringMap['d']['K']['L'] = 'R';
    stringMap['e']['P']['M'] = 'T';
    stringMap['f']['E']['P'] = 'U';
    stringMap['g']['U']['X'] = 'Y';
    stringMap['h']['C']['D'] = 'I';
    stringMap['i']['A']['Z'] = 'O';
    stringMap['j']['Z']['B'] = 'P';
    stringMap['k']['T']['L'] = 'A';
    stringMap['l']['I']['F'] = 'D';
    stringMap['m']['B']['D'] = 'S';
    stringMap['n']['M']['J'] = 'F';
    stringMap['o']['N']['H'] = 'G';
    stringMap['p']['W']['G'] = 'H';
    stringMap['q']['V']['O'] = 'J';
    stringMap['r']['O']['W'] = 'K';
    stringMap['s']['X']['B'] = 'L';
    stringMap['t']['G']['I'] = 'Z';
    stringMap['u']['H']['T'] = 'X';
    stringMap['v']['J']['Z'] = 'C';
    stringMap['w']['D']['A'] = 'V';
    stringMap['x']['Y']['C'] = 'B';
    stringMap['y']['F']['U'] = 'N';
    stringMap['z']['L']['E'] = 'M';
    string plaintext, ciphertext;
    cout << "Enter plaintext: ";
    cin >> plaintext;
    int ct = 0;
    for (int i = 0; i < plaintext.length(); i++)
    {
        ct++;
        for (const auto &pair : stringMap)
        {
            if (plaintext[i] == pair.first)
            {
                for (const auto &pair2 : pair.second)
                {
                    // cout<<pair2.first<<endl;
                    if (ct >= 1 && ct <= (plaintext.length() / 3))
                    {
                        ciphertext = ciphertext + pair2.first;
                        break;
                    }
                    for (const auto &pair3 : pair2.second)
                    {
                        if (ct > (plaintext.length() / 3) && ct <= (2 * plaintext.length() / 3))
                        {
                            // cout << pair3.first << endl;
                            ciphertext = ciphertext + pair3.first;
                            break;
                        }
                        if (ct > (2 * plaintext.length() / 3) && ct <= (plaintext.length()))
                        {
                            // cout << pair3.second << endl;
                            ciphertext = ciphertext + pair3.second;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout << "Ciphertext: ";
    cout << ciphertext << endl;
}