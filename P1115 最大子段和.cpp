#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int w[200010];
int dp[200010]={0};
int sum=-99999;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i];
		dp[i]=max(w[i],dp[i-1]+w[i]);
		sum=max(sum,dp[i]);
	}
	cout<<sum;
}
