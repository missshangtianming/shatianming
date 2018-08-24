#include<cstdio>
#include<iostream>
using namespace std;
int n,m;
bool Prime_memory[10000];
bool Prime_judge(int x)
{
	if(Prime_memory[x]==true) return Prime_memory[x];
	if(x==1) return false;
	for(int i=2;i<x;i++)
	{
		if(x%i==0) return false;
	}
	Prime_memory[x]=true;
	return true;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		int x,y;
		cin>>x>>y;
		if(x>m||y>m||x<1||y<1)
		{
			cout<<"Crossing the line"<<endl;
		}
		else
		{
			for(int i=x;i<=y;i++)
			{
				if(Prime_judge(i)==true) sum++;
			}
			cout<<sum<<endl;
		}
	}
}
