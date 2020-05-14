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
    ll int n ,c ;
    cin>>n>>c;

    int arr[n];
    f(0,n){
        cin>>arr[i];
    }

    int pos = -1 , maxi = -1; 
    f(0,n-1){
        int temp = arr[i]-arr[i+1];
        if(temp>maxi){
            maxi = temp;
            pos = i;
        }
    }

    int result = arr[pos] - arr[pos+1] - c;

    //cout<<"Result: "<<result<<endl;

    if(pos == -1){
        cout<<"0"<<endl;
    }
    else if(result<0){
        cout<<"0"<<endl;
    }
    else{
        cout<<result<<endl;
    }
    return 0;
}