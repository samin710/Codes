#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    cin>>a;
    int ct_l = 0;
    for(int i = 0; i<a; i++){
        cin>>b>>c>>d;
        if(b+c+d>=2){
            ct_l++;
        }
    }
    cout<<ct_l<<endl;
    
}