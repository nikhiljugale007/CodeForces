#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int temp = min(m,n);
    
    if(temp%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}