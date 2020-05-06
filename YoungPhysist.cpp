#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int countX=0,countY=0,countZ=0;

    cin>>n;
    int x,y,z;

    while (n--){
        cin>>x>>y>>z;
        countX += x;
        countY += y;
        countZ += z;
    }
       
    if(countX==0 && countY==0 && countZ==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}