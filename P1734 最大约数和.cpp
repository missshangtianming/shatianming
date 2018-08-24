#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int sum(int x){
	int maxx=0;
	for(int i=1;i<x;i++){
		if(x%i==0) maxx+=i;
	}
	return maxx;
}
int go[1005];
int s=0;
int dp[1005];
int main(){
	cin>>s;
	for(int i=1;i<=s;i++){
		go[i]=sum(i);
	}
	for(int i=1;i<=s;i++){
		for(int j=s;j>=i;j--){
			dp[j]=max(dp[j],dp[j-i]+go[i]);
		}
	}
	cout<<dp[s];
}
