# HTL & C++ Program <img src="https://raw.githubusercontent.com/iampavangandhi/iampavangandhi/master/gifs/Hi.gif" width="30px"></h2>
![](https://img.shields.io/badge/language-cpp-blue.svg)

## In these repository you will find basic to andvance program !!!

### Index :

<!-- toc -->

  * [Binary Search](#binary_search)
  * [Vector Push & Pop](#Vector-Push-&-Pop)
  * [Priority Queue All Opretion](#Priority-Queue-All-Opretion)
  * [Priority Queue Compareter](#Priority_Queue_Compareter)
  * [Queue All Opration](#Queue-All-Opration)
  * [Sort](#Sort)
  * [Sort Reverse](#Sort-Reverse)
  * [Sort Reverse Compare Values Print](#Sort-Reverse-Compare-Values-Print)
  * [Vector Sort](#Vector-Sort)
  * [Stack Opration All](#Stack-Opration-All)
  * [Vector Sort Capacity](#Vector-Sort-Capacity)
  * [Vector Sort Capacity Max Size](#Vector-Sort-Capacity-Max-Size)
  * [Vector Sort Clear](#Vector-Sort-Clear)
  * [Vector Sort Reserve](#Vector-Sort-Reserve)
  * [Vector Sort Clear](#Vector-Sort-Clear)
  * [Vector Sort Revers](#Vector-Sort-Revers)
  * [Custom Comparater Priority Queue](#custom-comparater-priority-queue)


 
  
  

<!-- tocstop -->
### Binary Search
```C++

#include<bits/stdc++.h>
using namespace std;

binary_search(int arr[],int l,int r,int x)
{
		int mid;
		if(r>=l){
	
		int mid = l + ( r - l ) / 2;
	
		if( arr[mid] == x )
	
			return mid;
	
		if( arr[mid] > x )
	
		return binary_search(arr, l, mid-1, x);
		
		return binary_search(arr, mid+1, r, x);
	
}
	return -1;

}
int main()
{
	 int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binary_search(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0;
}
```

### Output


<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/Binary_Search.PNG?raw=true" width="900" height="400"/>
</p>

<!-- tocstop -->
### Vector Push & Pop
```C++

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
```

### Output


<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/Vector_push_pop.PNG?raw=true" width="900" height="400"/>
</p>



<!-- tocstop -->
### Priority Queue All Opretion
```C++

#include<iostream>
#include<queue>
using namespace std;

int main()
{
	priority_queue<int>pq;
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


```

### Output

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/priority_queue_all_opretion.PNG?raw=true" width="900" height="400"/>
</p>


<!-- tocstop -->
### Priority Queue Compareter
```C++

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

```

### Output

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/priority_queue_compareter.PNG?raw=true" width="900" height="400"/>
</p>


<!-- tocstop -->
### Queue All Opration
```C++

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
					

```

### Output


<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/queue_all_opration.PNG?raw=true" width="900" height="400"/>
</p>



<!-- tocstop -->
### Sort
```C++

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

```

### Output


<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/sort.PNG?raw=true" width="900" height="400"/>
</p>




<!-- tocstop -->
### Sort Reverse
```C++

#include<iostream>
#include<algorithm>
using namespace std;
 
 bool myCompare(int a, int b)
{
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

```

### Output

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/sort_reverse.PNG?raw=true" width="900" height="400"/>
</p>




<!-- tocstop -->
### Sort Reverse Compare Values Print
```C++

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

```

### Output

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/sort_reverse_compare_values_print.PNG?raw=true" width="900" height="400"/>
</p>




<!-- tocstop -->
### Vector Sort
```C++

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
		sort(v.begin(),v.end());
	v.pop_back();
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	
}

```

### Output

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/vector_sort.PNG?raw=true" width="900" height="400"/>
</p>




<!-- tocstop -->
### Stack Opration All
```C++

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
  
```

### Output

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/stack_opration_all.PNG?raw=true" width="900" height="400"/>
</p>





<!-- tocstop -->
###Vector Sort Capacity
```C++

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

	bool compare(int a,int b){
		return a>b;
		
	}

int main()
{

	vector<int> v;
	v.reserve(22);
	int n;
	cin>>n;
	

	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
		
	}
		
		sort(v.begin(),v.end(),compare);
	cout<<v.max_size();
		//v.clear();
		cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;

	}
	
	
}


```

### Output

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/vector_sort_capacity.PNG?raw=true" width="900" height="400"/>
</p>

<!-- tocstop -->
###Vector Sort Capacity Max Size
```C++

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

	bool compare(int a,int b){
		return a>b;
		
	}

int main()
{

	vector<int> v;
	v.reserve(22);
	int n;
	cin>>n;
	

	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
		
	}
		
		sort(v.begin(),v.end(),compare);
	cout<<v.max_size();
		//v.clear();
		cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;

	}
	
	
}

```

### Output

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/vector_sort_capacity_max_size.PNG?raw=true" width="900" height="400"/>
</p>


<!-- tocstop -->
###Vector Sort Clear
```C++


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

	bool compare(int a,int b){
		return a>b;
		
	}

int main()
{

	vector<int> v;
	v.reserve(22);
	int n;
	cin>>n;
	

	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
		
	}
		
		sort(v.begin(),v.end(),compare);
		
		v.clear();
		cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;

	}
	
	
}

```

### Output

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/vector_sort_clear..PNG?raw=true" width="900" height="400"/>
</p>


<!-- tocstop -->
###Vector Sort Reserve
```C++
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

	bool compare(int a,int b){
		return a>b;
		
	}

int main()
{

	vector<int> v;
	v.reserve(22);
	int n;
	cin>>n;


	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
		
	}
		
		sort(v.begin(),v.end(),compare);

	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	
	}
	
	
}

```

### Output

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/vector_sort_revers.PNG?raw=true" width="900" height="400"/>
</p>

<!-- tocstop -->
###Custom Comparater Priority Queue
```C++
 #include<iostream>
 #include<vector>
 #include<functional>
 #include<queue>
using namespace std;
 
class car
{
	public:
		int x;
		int y;
		int id;
		
	car(int id, int x, int y){
		this->id = id;
		this->x = x;
		this->y = y;
		 
	}	
	int dist()
	{
		return x*x+y*y;
		
	}	
	void print()
	{
		cout<<"ID:-"<<id;
		cout<<"LOCATION :"<<x<<",,,"<<y<<endl;
	}
		
};
class carcompare{
	public :
		bool operator()(car a, car b){
			return a.dist()<b.dist();
		}
};

int main()
{
	priority_queue<car,vector<car>,carcompare> pq;
	
	int x[10]={4,3,6,2,1,7,8};
	int y[10]={23,42,41,2,1,2,4};
	
	 for(int i=0;i<7;i++)
	{
	 car C(i,x[i],y[i]);
	 pq.push(C);
	}
	
	while(!pq.empty())
	{
		car p = pq.top();
		p.print();
		pq.pop();
		
	}
	
}

```

### Output

<p align="center">
<img src="https://github.com/Tejas281/HTL/blob/master/custom_comparater_priority_queue.PNG?raw=true" width="900" height="400"/>
</p>


