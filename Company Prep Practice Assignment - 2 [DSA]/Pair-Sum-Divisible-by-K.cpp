#include <bits/stdc++.h>
using namespace std;
#define int long long

int countKdivPairs(int A[], int n, int K)
{

	int freq[K] = { 0 };

	int ans = 0;

	for (int i = 0; i < n; i++) {
		int rem = A[i] % K;
	
		ans += freq[(K - rem) % K];
		freq[rem]++;
	}

	return ans;
}

int32_t  main()
{


	int n;cin>>n;
	int k;cin>>k;

	int A[n];

	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cout << countKdivPairs(A, n, k);

	return 0;
}