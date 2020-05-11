//********nikhiljugale007**********//

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<iterator>

using namespace std;

#define fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll          long long 
#define v           vector<ll int>
#define it          iterator it
#define pb          push_back
#define f(a,b)      for(long long int i=a;i<b;i++)
#define fv(v)       for(auto i=v.begin() ; i!=v.end();i++)
#define min         min_element
#define max         max_element
#define hell        1000000007


int main(){

    ll n,x;
	cin>>n>>x;
	v ans;
	for(int i=0; i<n; i++)
	{
		int m,y,flag=0;
		cin>>m;
		for(int j=0; j<m; j++)
		{
			cin>>y;
			if(y<x)
				flag=1;
		}
		if(flag)
			ans.pb(i+1);
	}
	cout<<ans.size()<<endl;
	for(int i=0; i<ans.size(); i++)
		cout<<ans[i]<<" ";
	cout<<endl; 
    return 0;
}   