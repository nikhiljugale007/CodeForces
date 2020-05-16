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

    char s[n][n];

    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
        }
    }
    char diag = s[0][0];
    char ndiag = s[0][1];

    if (s[0][0]==s[0][1]) {
        cout<<"NO"<<endl;
        return 0;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j || i+j==n-1) {
                if (s[i][j]!=s[0][0]) {
                    cout<<"NO"<<endl;
                    return 0;
                }
            } 
            else
            {
                if (s[i][j]!=s[0][1]){
                    cout<<"NO"<<endl;
                    return 0;
                } 
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
