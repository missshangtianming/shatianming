#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int wky,laowang;
int m,n;
int zhishidian[10010];
int timu[100001][3];
int endtime;
int dp[5050];
int main(){
	cin>>wky>>laowang;
	cin>>m>>n;
	for(int i=1,a;i<=n;i++){
		cin>>zhishidian[i];
		zhishidian[i]*=laowang/wky;
	}
	
	for(int i=1;i<=m;i++){
		cin>>timu[i][1]>>timu[i][2];//p表示该题目所属的知识点，q表示该题目对应的奖励值。
	}
	//zhishidian[timu[i][1]]
	cin>>endtime;
	for(int i=1;i<=m;i++){
		for(int j=endtime;j>=zhishidian[timu[i][1]];j--){
			dp[j]=max(dp[j],dp[j-zhishidian[timu[i][1]]]+timu[i][2]);
		}
	}
	cout<<dp[endtime];
}
