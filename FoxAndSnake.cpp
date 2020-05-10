#include <bits/stdc++.h>

using namespace std ;

int main(){
    int n , m ;
    cin >> n >> m ;

    int count = 0 ;
    int flag= 1; 
    for(int i=0;i<n;i++){
        if(count == 0){
            for(int j=0;j<m;j++){
                cout<<"#";
            }
            cout<<endl;
            count++;
        }
        else if(flag==1){
            for(int j=0;j<m-1;j++){
                cout<<".";
            }
            cout<<"#"<<endl;
            flag = 2 ; 
            count=0;
        }
        else if (flag == 2){
            cout<<"#";
            for(int j=1;j<m;j++){
                cout<<".";
            }
            cout<<endl;
            flag=1;
            count=0;
        }
    }
}