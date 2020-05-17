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
    ll int n  , m ;
    cin>>n>>m;

    int correct[n];
    int incorrect[m];

    f(0,n){
        cin>>correct[i];
    }

    f(0,m){
        cin>>incorrect[i];
    }

    sort(correct,correct+n);
    sort(incorrect,incorrect+m);

    int ans = correct[n-1];
    if(correct[n-1] < correct[0]*2){
        ans = correct[0]*2;
    }

    if(incorrect[0]<=ans){
        cout<<"-1"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    
    return 0;
}
