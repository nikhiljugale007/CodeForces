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

    fast;

    #ifndef ONLINE_JUDGE
		//Read input
		freopen("input.txt","r",stdin);
		//Write output
		freopen("output.txt","w",stdout);

	#endif

    ll x , y , z ;
    cin>>x>>y>>z ;

    ll a , b , c ;

    c = sqrt((y*z)/x);
    a = z/c;
    b = x/a;

    cout<<(a+b+c)*4<<endl;
}   
