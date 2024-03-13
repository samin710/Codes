#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, x = "hello";
    cin >> s;
    int a = 0, b = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==x[a]){
            a++;
            b++;
        }
    }
    if(b==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}