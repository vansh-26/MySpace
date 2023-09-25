#include <bits/stdc++.h>
using namespace std;

void solve(){
   long long int l,r,ctr=0;
   cin>>l>>r;
   if(l<r)
   {
   for(long long int i=1;i<=r;i++)
   {
       ctr=ctr+(i*i*i);
   }
   cout<<ctr%(1000000007)<<"\n";
   }
   else
   {
       cout<<l*l*l<<"\n";
   }
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    solve();
	}
	return 0;
}
