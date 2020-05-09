#include <bits/stdc++.h>

using namespace std ;

int main(){
    int x1 , y1, x2 , y2 ;
    cin>>x1>>y1>>x2>>y2;

    int d1 = abs(x1 - x2);
	int d2 = abs(y1 - y2);
	if(d1 > 0 && d2 > 0 && d1 != d2)
	{
		printf("-1\n");
		return 0;
	}
	if(d1 > 0 && d2 > 0)
	{
		printf("%d %d %d %d\n", x1, y2, x2, y1);
	}
	else if(d1 > 0)
	{
		printf("%d %d %d %d\n", x1, y1+d1, x2, y1+d1);
	}
	else
	{
		printf("%d %d %d %d\n", x1+d2, y1, x1+d2, y2);
	}
 
	return 0;
}