#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;

    if(a%5==0){
        cout<<a/5;
    }
    else if(a/5<1){
        cout<<1;
    }
    else{
        cout<<(a/5)+1;
    }
}