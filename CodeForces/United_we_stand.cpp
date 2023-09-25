#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n,ctr=0,k=0;
    cin>>n;
    vector<ll>a,c;
    for(ll i=0;i<n;i++)
    {   
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if((a[j]%a[i])==0) 
            {
               ctr++;
            }
        }
        if(ctr==0)
        {   
            k++;
            c.push_back(a[i]);
        }
    }
     if(k!=0) 
     {
        cout<<a.size()<<"\n"<<c.size()<<"\n";
        for(ll i=0;i<a.size();i++)
        {
            cout<<a[i];
        }
        for(ll i=0;i<c.size();i++)
        {
            cout<<c[i];
        }
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