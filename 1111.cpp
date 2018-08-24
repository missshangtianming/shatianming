#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
	bool judge[320001][320001]={false};
	int n,m;
	cin>>n>>m;
	int w[100],v[100],fushu[100];
	int dp[100000];
	for(int i=1;i<=m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		w[i]=x;
		v[i]=w[i]*y;
		fushu[i]=z;
	}
	for(int i=1;i<=m;i++){
		for(int j=n;j>=0;j--){
			if(fushu[i]==0&&j>=w[i]){
				dp[j]=max(dp[j-1],dp[j-w[i]]+v[i]);
				if(dp[j]=dp[j-w[i]]+v[i]) judge[j][i]=true;
			}
			else if(fushu[i]!=0&&j>=w[i]){
				if(judge[j][fushu[i]]=true){
					dp[j]=max(dp[j-1],dp[j-w[i]]+v[i]);
				}
			}
		}
	}
	cout<<dp[m];
	return 0;
}
