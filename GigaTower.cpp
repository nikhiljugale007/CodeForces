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

    ll n;
    cin>>n;

    int count=0;
    while(1){
        bool check = false;
        if(n>=0){
            count++;
            n = n + 1;
            ll temp = n ;
            while(temp>0){
                if(temp % 10 == 8){
                    check = true;
                    break;
                }
                temp /= 10 ;
            }
        }
        else{
            count++;
            n = n + 1 ;
            ll temp = n * (-1) ;
            while(temp>0){
                if(temp % 10 == 8){
                    check = true;
                    break;
                }
                temp /= 10 ;
            }
            cout<<endl;
        }
        if(check){
            break;
        } 
    }
    cout<<count<<endl;
}   
