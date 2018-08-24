#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int dp[100005]={1},w[100005];
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	//
	for(int i=1;i<=n;i++){//1-4
		for(int j=m;j>=0;j--){//4-0
			dp[j]+=dp[j-w[i]];
		}
	}
	cout<<dp[m];
}
