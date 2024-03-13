#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int ct_l = 0, x=1;

    for (int i = 0; i < a.length(); i++)
    {
        for (int j = x; j < a.length(); j++)
        {
            if (a[i] == a[j])
            {
                ct_l++;
                break;
            }
        }
        x++;
    }

    if((a.length()-ct_l)%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}