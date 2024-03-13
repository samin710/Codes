#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, ct_l=0;
    string s;
    cin>>a>>s;

    for(int i = 0; i<a-1; i++){
        if(s[i]==s[i+1]){
            ct_l++;
        }
    }
    cout<<ct_l;
}