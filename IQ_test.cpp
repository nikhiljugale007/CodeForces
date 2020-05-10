
#include<iostream>
#include<stdio.h>
#define Max 105
using namespace std;
 
int arr[Max];
 
int main()
{
	int n, i, t;
	while(~scanf("%d", &n))
	{
		for(i=0;i<n;i++)
		{
			scanf("%d", &arr[i]);
			arr[i] %= 2;
		}
		for(i=0, t=0;i<n;i++)
		{
			if(arr[i])
			    t++;
		}
		if(t==1)
		{
			for(i=0, t=0;i<n;i++)
				if(arr[i])
					printf("%d\n", i+1);
		}
		else
		{
			for(i=0, t=0;i<n;i++)
				if(!arr[i])
					printf("%d\n", i+1);
		}
	}
 
}