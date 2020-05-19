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

    #ifndef ONLINE_JUDGE
		//Read input
		freopen("input.txt","r",stdin);
		//Write output
		freopen("output.txt","w",stdout);

	#endif
    
    int n;
    cin>>n;
    int arr[n][2];

    int sumU = 0 , sumL = 0 ;
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
        sumU += arr[i][0];
        sumL += arr[i][1];
    }
    if(sumU%2==0 && sumL%2==0){
        cout<<"0"<<endl;
        return 0;
    }
    else if(sumU%2==0 || sumL%2==0){
        cout<<"-1"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            if((arr[i][0]%2==0) && (arr[i][1]%2!=0)){
                cout<<"1"<<endl;
                return 0;
            }
            else if((arr[i][0]%2!=0) && (arr[i][1]%2==0)){
                cout<<"1"<<endl;
                return 0;
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
