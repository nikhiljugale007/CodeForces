#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
    int n , m ;
    cin>>n>>m;

    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }       

    sort(arr,arr+m);
    int diff = abs(arr[0]-arr[n-1]);
    int i=1;
    while((i+n-1)<m){
        int temp = abs(arr[i]-arr[i+n-1]);
        if(temp<diff){
            diff = temp;
        }
        i++;
    }
    cout<<diff<<endl;
}