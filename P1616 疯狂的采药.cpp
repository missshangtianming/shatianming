#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int w[105],v[105];
int dp[105][1005];
int main(){
	 int t,m;
    scanf("%d%d",&t,&m);//ʱ����м�����ҩ 70 3
    for(int i=1;i<=m;i++)//1-3
    {
        scanf("%d%d",&w[i],&v[i]);
    }
    for(int i=1;i<=m;i++){//1-3
    	for(int j=t;j>0;j--){//70-0
    		//i=�м��� j=ʣ��ʱ�� 
    		if(j-w[i]>=0) dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
			else dp[i][j]=dp[i-1][j];
			}
	}
	cout<<dp[m][t];
	return 0;
}
