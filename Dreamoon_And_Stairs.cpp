#include <iostream>
 
using namespace std;
 
 
int main()
{
    int n,m;
    cin>>n>>m;
 
    int x,y;
 
    for(y=0;y<=n;y++)
    {
        if((n-y) %2 ==0)
        {
            x = (n-y)/2;
            if((x+y) % m ==0) {
                cout<<x+y;
                return 0;
            }
        }
    }
    cout<<-1;
 
    return 0;
}