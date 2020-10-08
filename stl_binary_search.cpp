#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


	int main()
	{
		int my[]={2,5,3,1,6,7};
		vector<int>v(my,my+6);
		
		sort(v.begin(),v.end());
		
		vector<int>::iterator low,up;
		low=lower_bound(v.begin(),v.end(),6);
		up=upper_bound(v.begin(),v.end(),6);
		cout<<"lower bound position"<<(low-v.begin());
		cout<<"upper bound position"<<(up-v.begin());
		
		return 0;
		
	}
