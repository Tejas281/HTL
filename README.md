# HTL & C++ Program <img src="https://raw.githubusercontent.com/iampavangandhi/iampavangandhi/master/gifs/Hi.gif" width="30px"></h2>
![](https://img.shields.io/badge/language-cpp-blue.svg)

## In these repository you will find basic to andvance program !!!

### Index :

<!-- toc -->

  * [Binary Search](#binary_search)
  * [DataType,Naming,Rules](#DataType-Naming-Rules)
  * [Datatype,PRIMITIVE & REFERENCE](#Datatype-PRIMITIVE-REFERENCE)
  * [Type conversion](#Type-conversion)
  * [Numbers  & Math object](#Numbers-Math-object)
  * [Concise Functional Iteration](#concise-functional-iteration)

<!-- tocstop -->
### Binary Search
```STL

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

<p align="center">
<img src="https://github.com/Tejas281/STL/blob/master/Binary_Search.PNG?raw=true" width="350"/>
</p>
