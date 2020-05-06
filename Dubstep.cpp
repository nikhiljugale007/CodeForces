#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;

    int i=0;
 
    
    int flag=0;
    int wub=0;
    while(i<(str.length())){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i+=2;
            wub=1;
            if(flag==1){
                cout<<" ";
                flag=0;
            }
        }
        else{
            cout<<str[i];
            flag=1;
            wub=0;
        }
        i++;
    }
    
}