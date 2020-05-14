
#include<bits/stdc++.h>
#define maxx 11111
using namespace std;
int a[maxx];
int main(){
    int i,j,n,ans=9999;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=2;i<n;i++){
        int t=0;
        for(j=2;j<=n;j++){
            if(j==i) continue;
            if(j==i+1){
                t=max(t,a[j]-a[j-2]);
                continue;
            }
            t=max(t,a[j]-a[j-1]);
        }
        ans=min(ans,t);
    }
    cout<<ans;
}