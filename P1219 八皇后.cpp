#include<cstdio>
#include<iostream>
using namespace std;
int chess_board[14][14];
int n;
int sum=0;
bool judge(int x,int y)
{
	for(int i=1;i<=n;i++)
	{
		if(chess_board[x][i]==1||chess_board[i][y]==1) return false;
	}
	while(x!=1&&y!=1)
	{
		x--;
		y--;
	}
	int a=x,b=x,c=y,d=y;
	for(int i=1;i<=n;i++)
	{
		if(chess_board[a][c]==1||chess_board[b][d]==1)//x+1,y+1   x-1,y+1
		a++;
		b--;
		c++;
		d++;
	}
	return true;
}
int queen(int x)
{
	if(x>n||x<1) return 0;
	for(int i=1;i<=n;i++)
	{
		if(judge(x,i)==true)
		{
			if(x==n)
			{
			return 1;		
			}
			chess_board[x][i]=1;
			queen(x+1);
			chess_board[x][i]=-1;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			chess_board[i][j]=-1;
		}
	}
	for(int i=1;i<=8;i++)
	{
		sum+=queen(i);
	}
	cout<<sum<<endl;
}
