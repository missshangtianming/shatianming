#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
	freopen("testdata(1).in","r",stdin);
	int v,n;
	scanf("%d%d",&v,&n);
	int w[10001];
	int dp[50000];
	for(int i=1;i<=n;i++){
		scanf("%d",&w[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=v;j>=w[i];j--){
			if(j>=w[i]) dp[j]=max(dp[j],dp[j-w[i]]+w[i]);
			}
	}
	cout<<v-dp[v];
}
