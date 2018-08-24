#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n,a,b;
int k[201];
int ij[10001][10001];
int f(int i,int j)
{
	if(ij[i][j]!=0) 
	{
	return ij[i][j];	
	}
	if(i==b) 
	{
	ij[i][j]=j;	
	return j;	
	}
	else if(i<=0||i>n)
	{
		
	}
	else
	{
	ij[i][j]=min(f(i+k[i],j+1),f(i-k[i],j+1));
	return min(f(i+k[i],j+1),f(i-k[i],j+1));	
	}
}
int main()
{
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++)
	{
		cin>>k[i];
	}
	int u;
	u=f(a,0);
	cout<<u<<endl;
}
