#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int a[] ={3,5,2,1,6,7};
	int n=sizeof(a)/sizeof(int);
	
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"";
		
	}
	
	
}
