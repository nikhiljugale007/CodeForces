#include <bits/stdc++.h>

using namespace std ;

int main(){
    int a , b, c , d ;
    cin>>a>>b>>c>>d;

    int temp1 = (3*a)/10;
    int temp2 = a - (a*c)/250;

    int res1 = max(temp1,temp2);

    int temp3 = (3*b)/10;
    int temp4 = b - (b*d)/250;

    int res2 = max(temp3,temp4);   

    if(res1 > res2){
        cout<<"Misha"<<endl;
    }
    else if(res1 < res2){
        cout<<"Vasya"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }

    return 0;
}
