#include<cstdio>
#include<iostream>
using namespace std;
int boy[32][2];
int jilu[31][31];
int n,m,j=1,sum=0;
void f(int x,int y)
{
	cout<<x<<" "<<y<<endl;
	if(x==1&&y==m) sum=sum+1; 
	else if(y>m) return ;
	f(boy[x][0],y+1);//向左走 
	f(boy[x][1],y+1);//向左走
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
	f(1,0);
	cout<<sum;
}
