//********nikhiljugale007**********//
// this is updated file.

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

    int n;
    cin>>n;

    int arr[n];
    vector<int> pos , neg , zero ;
    int posC = 0 , negC = 0, zeroC = 0;
    f(0,n){
        cin>>arr[i];
        if(arr[i]>0){
            posC++;
            pos.push_back(arr[i]);
        }
        else if(arr[i]<0){
            negC++;
            neg.push_back(arr[i]);
        }
        else{
            zeroC++;
            zero.push_back(arr[i]);
        }
    }
    if(neg.size() %2 == 0 && neg.size() != 0){
        zero.push_back(neg[neg.size()-1]);
        neg.resize(neg.size()-1);
    }
    if(pos.size() == 0){
        pos.push_back(neg[neg.size()-1]);
        pos.push_back(neg[neg.size()-2]);
        neg.resize(neg.size()-2);
    }

    cout<<neg.size()<<" ";
    f(0,neg.size()){
        cout<<neg[i]<<" ";
    }
    cout<<endl;
    cout<<pos.size()<<" ";
    f(0,pos.size()){
        cout<<pos[i]<<" ";
    }
    cout<<endl;
    cout<<zero.size()<<" ";
    f(0,zero.size()){
        cout<<zero[i]<<" ";
    }
    cout<<endl;
}
