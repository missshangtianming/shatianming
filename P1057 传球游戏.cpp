#include<cstdio>
#include<iostream>
using namespace std;
int boy[50][2];
int jilu[100][100];
int n,m,j=1,sum=0;
int f(int x,int y)
{
	if(jilu[x][y]!=0) return jilu[x][y];
	if(x==1&&y==m) return 1; 
	else if(y>m) return 0;
	int sum=f(boy[x][0],y+1)+f(boy[x][1],y+1);//向左走
	jilu[x][y]=sum;
	return sum;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
	if(j+1>n) 
	{
	j=j-n;	
	}
	boy[i][0]=j+1;
	if(j-1<=0) 
	{
	j=j+n;	
	}
	boy[i][1]=j-1;//设定左右
	j++;	
	}
	cout<<f(1,0);;
}
