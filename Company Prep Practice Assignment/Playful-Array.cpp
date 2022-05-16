#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    	int n;
        cin>>n;
		int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a,a+n);
        vector<int>v;
        int dif = 0;
        for(int i=1; i<n; i++){
            dif = abs(a[i] - a[i-1]);
            v.push_back(dif);
        }
        sort(v.begin(), v.end(), greater<int>());

        if(v[0] > 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    return 0;
}