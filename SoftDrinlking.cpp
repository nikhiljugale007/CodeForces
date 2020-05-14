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
    int n, k, l, c, d, p, nl, np ;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np ;

    int temp1 = (k*l)/nl ;
    int temp2 = (c*d);
    int temp3 = p/np;

    if(temp1 < temp2){
        temp2 = temp1 ;
    }
    if(temp2 < temp3){
        temp3 = temp2 ;
    }
    cout<<temp3/n<<endl;
    return 0;
}