    #include <bits/stdc++.h>

    using namespace std ;

    int countDigit(long long n) 
    { 
        int count = 0; 
        while (n != 0) {
            int temp = n % 10;
            if(temp == 4 || temp == 7){
                ++count; 
            }   
            n = n / 10; 
        } 
        return count; 
    } 

    int main(){
        int n,m;
        cin>>n>>m;

        int temp=0 , count=0 ;

        while(n--){
            cin>>temp;
            int tempCount = countDigit(temp);
            //cout<<tempCount<<endl;
            if(tempCount <= m){
                count++;
            }
        }
        cout<<count<<endl;
    }
