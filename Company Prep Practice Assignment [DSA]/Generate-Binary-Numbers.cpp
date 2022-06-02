#include<bits/stdc++.h>
using namespace std;

vector<string> generate(int N)
{
    
     vector<string> v;
      queue<string> q;
       q.push("1");
        for(int i=0 ;i<N;i++)
        {
            string curr=q.front();
             q.pop();
             q.push(curr+"0");
             q.push(curr+"1");
             v.push_back(curr);
        }
         return v;
}

int main()
{

		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	return 0;
}