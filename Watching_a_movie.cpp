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
    ll int n , x , l , r;
    cin>>n>>x;

    int count = 0 , currentPos  = 1  ;

    for(int i=0 ; i<n ;i++){
        cin>>l>>r;
        while(currentPos< l){
            if(currentPos + x <= l){
                currentPos += x ;
            }
            else{
                count += 1;
                currentPos += 1 ;
            }
        }

        currentPos = r+1;
        count += (r-l)+1;
    }

    cout<<count<<endl;
    return 0 ;
}
