#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>m>>n;
	int dp[12888];
	int w[12888],c[12888];
	for(int i=1;i<=n;i++){
		cin>>w[i];
		c[i]=w[i];//重量 价值 
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=w[i];j--){
			dp[j]=max(dp[j-w[i]]+w[i],dp[j]);
		}
	}
	cout<<dp[m];
}
