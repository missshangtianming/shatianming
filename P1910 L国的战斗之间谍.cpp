#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n,m,x;
int a[105],b[105],c[105];
int dp[1005][1005];
int main(){
	cin>>n>>m>>x;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=x;j>=c[i];j--){
			for(int k=m;k>=b[i];k--){
				dp[j][k]=max(dp[j][k],dp[j-c[i]][k-b[i]]+a[i]);
			}
		}
	}
	cout<<dp[x][m];
}
