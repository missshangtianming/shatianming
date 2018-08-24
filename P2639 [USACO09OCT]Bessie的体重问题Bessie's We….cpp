#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int h,n;
	cin>>h>>n;
	int dp[50000];
	int w[50000];
	for(int i=1;i<=n;i++){
		scanf("%lld",&w[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=h;j>=w[i];j--){
			dp[j]=max(dp[j-w[i]]+w[i],dp[j]);
		}
	}
	printf("%d",dp[h]);
}
