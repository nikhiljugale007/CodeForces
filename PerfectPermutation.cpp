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
    ll int n;
    cin>>n;

    if(n%2 != 0){
        cout<<"-1"<<endl;
    }
    else{
        int flag = 0 ;
        for(int i=1;i<=n;i++){
            if(flag == 0){
                cout<<i+1<<" ";
                flag = 1 ;
            }
            else{
                cout<<i-1<<" ";
                flag = 0 ;
            }
        }   
    }
    return 0 ;
}
