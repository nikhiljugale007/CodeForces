#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    if(n>=0) {
        cout<<n<<endl;
        return 0;
    }
    n=-n;
    n=min(n/10,n/100*10+n%10);
    cout<<n<<endl;
}