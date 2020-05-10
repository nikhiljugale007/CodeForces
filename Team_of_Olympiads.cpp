#include<bits/stdc++.h>

using namespace std;

void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 

int main(){
    int n;
    cin>>n;

    stack<int> pro ;
    stack<int> pe;
    stack<int> maths;

    int temp ;
    for(int i=1; i<=n; ++i){
      cin>>temp;
      switch(temp){
            case 1:
                pro.push(i);
                break ;
            case 2:
                maths.push(i);
                break ;
            case 3:
                pe.push(i);
                break ;
      }
    }
    int pS = pro.size();
    int peS = pe.size();
    int mS = maths.size();

    int minimum = min(pS,peS);
    minimum = min(minimum,mS);

    cout<<minimum <<endl;
    while (minimum--){
        cout<<pro.top()<<" "<<maths.top()<<" "<<pe.top()<<endl;
        pro.pop();
        maths.pop();
        pe.pop();
    }
}   