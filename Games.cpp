#include<bits/stdc++.h>
#include<vector>

using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n][2];

    int home , guest;
    for(int i=0;i<n;i++){
        cin>>home>>guest;

        arr[i][0]=home;
        arr[i][1]=guest;
    }    
    int count=0;  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][0]==arr[j][1]){
                count++;
            }
        }
    }
    
    cout<<count<<endl;
}