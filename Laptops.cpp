//********nikhiljugale007**********//

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<iterator>
#include<utility>

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
    ll int t;
    cin>>t;

    vector <pair<int,int> > arr;
    int temp , temp1 ;
    f(0,t){
        cin>>temp>>temp1;
        arr.push_back(make_pair(temp,temp1));
    }

    sort(arr.begin(),arr.end());

    for (int i=0; i<t-1; i++) 
    { 
        if(arr[i].second>arr[i+1].second){
            cout<<"Happy Alex"<<endl;
            return 0 ;
        }
    } 

    cout<<"Poor Alex"<<endl;
    return 0;
}