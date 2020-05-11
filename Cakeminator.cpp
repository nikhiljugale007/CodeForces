//********nikhiljugale007**********//

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<iterator>

using namespace std;

#define fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll          long long 
#define v           vector<ll int>
#define it          iterator it
#define pb          push_back
#define f(a,b)      for(long long int i=a;i<b;i++)
#define fv(v)       for(auto i=v.begin() ; i!=v.end();i++)
#define min         min_element
#define max         max_element
#define hell        1000000007


int main(){

    fast;
    ll int r , c ;
    cin >> r >> c ;

    char temp ;
    int arr[r][c] ;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin>>temp;
            if(temp == 'S'){
                arr[i][j] = 1 ;
            }
            else{
                arr[i][j] = 0 ;
            }
        }
    }

    for(int i = 0 ; i < r ; i++){
        int flag = 0 ;
        for(int j = 0 ; j < c ; j++){
            if(arr[i][j]==1){
                flag = 1 ;
            }
        }
        if(flag == 0){
            for(int j = 0 ; j < c ; j++){
                arr[i][j] = 2;    
            }
        }
    }
    
    for(int i = 0 ; i < c ; i++){
        int flag = 0 ;
        for(int j = 0 ; j < r ; j++){
            if(arr[j][i]==1){
                flag = 1 ;
            }
        }
        if(flag == 0){
            for(int j = 0 ; j < r ; j++){
                arr[j][i] = 2;    
            }
        }
    }
    int count = 0 ;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            if(arr[i][j] == 2){
                count++;
            }
        }
    }
    cout<<count<<endl;
}