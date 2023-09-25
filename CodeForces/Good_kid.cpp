#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n,prd=1,ctr=1;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        prd=prd*a[n];
    }
    for(ll i=0;i<n;i++)
    {
        a[i]=a[i]+1;
        ctr=ctr*a[i];  
    }
}

int main(){
    int _T;
    cin>>_T;
    while(_T--){
        solve();
    }
    return 0;
}