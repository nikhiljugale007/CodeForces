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

    int arr[n+1];

    f(1,n+1){
        cin>>arr[i];
    }
    
    int sum1=0 , sum2=0 , sum3=0 ;

    f(1,n+1){
        switch(i%3){
            case 1:
                sum1+=arr[i];
                break;
            case 2:
                sum2+=arr[i];
                break;
            case 0:
                sum3+=arr[i];
                break;
        }
    }
    
    if(sum1>sum2 && sum1>sum3){
        cout<<"chest"<<endl;
    }
    else if(sum2>sum3 && sum2>sum1){
        cout<<"biceps"<<endl;
    }
    else if(sum3>sum1 && sum3>sum2){
        cout<<"back"<<endl;    
    }

    return 0;
}
