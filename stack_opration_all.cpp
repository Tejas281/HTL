#include<stdio.h>
#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

	int main()
	{
		
		stack <string> s;
	//	cout<<"pop opretion preform:-";
		s.push("Tejas");
		s.push("Akash");
		s.push("Hardik");
	//	s.pop();
		while( ! s.empty() )
		{
			cout<<s.top()<<endl;
			s.pop();
		}
	}
					
