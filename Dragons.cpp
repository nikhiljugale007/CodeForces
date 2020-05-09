#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int s , n;
    cin>>s>>n;

    pair<int ,int> arr[1005];

    for(int i = 0; i < n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr ,arr + n);
    
    
    for(int i = 0; i < n;i++){
        if(s>arr[i].first){
            s+=arr[i].second;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}