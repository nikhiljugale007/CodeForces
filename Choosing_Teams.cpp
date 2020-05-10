#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> arr;
    int temp;
    for(int i=0; i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    int count = 0;
    for(int i=0; i<arr.size(); i++){
        if((5-arr[i])>=k){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count/3<<endl;

}