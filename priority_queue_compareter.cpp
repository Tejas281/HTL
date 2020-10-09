#include<iostream>
#include<queue>
#include<vector>
#include<functional>

using namespace std;

int main()
{
	priority_queue<int,vector<int>,greater<int> > pq;	
	int a[]={2,5,3,1,4};
	
	for(int i=0;i<5;i++)
	{
		pq.push(a[i]);	
	}
	
	while(!pq.empty()){
		cout<<pq.top();
		pq.pop();
	}
	return 0;
}

