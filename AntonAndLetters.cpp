#include <bits/stdc++.h>
#include <set>

using namespace std;

int main(){
    string str;
    getline(cin,str);


    set<char> arr;
    for(int i=0;i<str.length();i++){
        if((str[i]<=122 && str[i]>=97)||(str[i]<=90 && str[i]>=65)){
            arr.insert(str[i]);
        }
    }
    cout<<arr.size()<<endl;
    return 0;
}