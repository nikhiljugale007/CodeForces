#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v;
	int temp;
	cin>>temp;
	int max = temp ,maxPos = 0;
	int min = temp , minPos = 0;

	for(int i=1;i<n;i++){
		cin>>temp;
		if(temp>max){
			max = temp;
			maxPos = i;
		}
		if(temp<=min){
			min = temp ;
			minPos = i;
		}
	}
	int count = n-minPos-1;	
	if(maxPos>=minPos){
		count += maxPos-1;
	}
	else{
		count += maxPos ;
	}
	cout<<count<<endl;
}