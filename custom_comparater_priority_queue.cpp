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
 
