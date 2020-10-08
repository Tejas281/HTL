#include<stdio.h>
#include<iostream>
#include<queue>

using namespace std;

	int main()
	{
		
		queue <int> s;
		
		for(int i=0;i<5;i++)
		{
			s.push(i);
		}
		
		while( ! s.empty() )
		{
			cout<<s.front()<<endl;
			s.pop();
		}
	}
					
