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
    ll int l , r;
    cin>>l>>r;

    ll int gcd1, gcd2 , a , b , c ;

    if(r-l<2){
        cout<<"-1"<<endl;
    }
    else if(r-l == 2){
        if(l%2==0){
            cout<<l<<" "<<l+1<<" "<<l+2<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    else {
        if(l%2) cout<<l+1<<' '<<l+2<<' '<<l+3;
        else cout<<l<<' '<<l+1<<' '<<l+2;
    }
    return 0;
}
