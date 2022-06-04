
#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

long long fastExpo(long long a,long long b){
    long long ans=1;
    while(b>0){
        if(b&1){ans=(ans*a)%mod;}
                a=(a*a)%mod;
                b>>=1;
        }
    return ans;       
}

int main() {
	ll n,fn;
	cin>>n>>fn;

	// concept of modulo inverse 
	// subconcept if mod is prime --> using direct formula  

	ll k=fastExpo(2,n-1);
	k=fastExpo(k,mod-2);

    ll ans=(fn*k)%mod;

    cout<<ans<<endl;
	return 0;
}