#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int JUZHENG[10][10];
int N;
int dp(int x,int y,int ans)
{
	if(x<=N&&y<=N)//�ж��Ƿ񳬳��߽� 
	{
	if(x==N&&y==N)//�ж��Ƿ����յ� 
	{
	cout<<ans<<endl;
	return ans;//��������յ㣬����һ���յ�ֵ 
	}
	ans=ans+JUZHENG[x][y];//0
	ans=max(dp(x+1,y,ans),dp(x,y+1,ans));
	ans=ans-JUZHENG[x][y];
	}
}
int main()
{
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		for(int i1=1;i1<=N;i1++)
		{
			JUZHENG[i][i1]=0;
		}
	}
	int x,y,z;
	for(;;)
	{
		cin>>x>>y>>z;
		if(x==0&&y==0&&z==0) break;
		JUZHENG[x][y]=z;
	}
	cout<<dp(1,1,0);
}
