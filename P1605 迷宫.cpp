#include<cstdio>
#include<iostream>
using namespace std;
int n,m,t,sx,sy,fx,fy;
int board[100][100];
int sum=0;
void move(int x,int y)
{
	if(x<=0||y<=0||x>n||y>m)
	{
	}
	else
	{6		board[x][y]=1;
		if(x==fx&&y==fy) sum++;
		else
		{
		if(board[x+1][y]!=1)
		{
			move(x+1,y);
		}
		if(board[x-1][y]!=1)
		{
			move(x-1,y);
		}
		if(board[x][y+1]!=1)
		{
			move(x,y+1);
		}
		if(board[x][y-1]!=1)
		{
			move(x,y-1);
		}
		}
		board[x][y]=0;
	}
}
int main()
{
	cin>>n>>m>>t;
	cin>>sx>>sy>>fx>>fy;
	for(int i=0;i<t;i++)
	{
	int x,y;
	cin>>x>>y;
	board[x][y]=1;	
	}
	move(sx,sy);
	cout<<sum;
}
