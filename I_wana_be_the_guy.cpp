#include <bits/stdc++.h>
#include <set>

using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> arr;
    int p,q,temp;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>temp;
        arr.insert(temp);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>temp;
        arr.insert(temp);
    }

    if(arr.size()!=n){
        cout<<"Oh, my keyboard!"<<endl;
    }
    else{
        cout<<"I become the guy."<<endl;
    }
    return 0;
}