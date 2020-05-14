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
    ll int n , k;
    cin>>n>>k;

    int f ,t , joy ,tempJoy ;
    cin>>f>>t;
    if(t>k){
        joy = f - (t-k);
    }
    else{
        joy = f;
    }
    f(0,n-1){
        cin>>f>>t;      
        if(t>k){
            tempJoy = f - (t-k);
        }
        else{
            tempJoy = f;
        }  
        if(tempJoy > joy){
            joy = tempJoy;
        }
    }
    cout<<joy<<endl;

    return 0;
}