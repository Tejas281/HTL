#include<iostream>
#include<algorithm>
using namespace std;
 
 bool myCompare(int a, int b)
{
	cout<<a<<"<--->"<<b<<""<<endl;
	return a>b;
}
int main()
{
	int a[] ={3,5,2,1,6,7};
	int n=sizeof(a)/sizeof(int);
	
	sort(a,a+n,myCompare);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"";
		
	}
	
	
}
