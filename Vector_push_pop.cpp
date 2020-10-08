#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
		
	}
	v.pop_back();
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	
}

