#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    char arr[3];
    ll ctr=0;
    for(ll i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    if(arr[0]!='a') ctr++;
    if(arr[1]!='b') ctr++;
    if(arr[2]!='c') ctr++;
     
    if(ctr<=2) cout<<"YES\n";
    else cout<<"NO\n";

}

int main(){
    int _T;
    cin>>_T;
    while(_T--){
        solve();
    }
    return 0;
}