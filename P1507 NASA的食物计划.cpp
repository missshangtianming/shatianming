#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int w1[55],w2[55],v[55];
int dp[501][501];
int main(){
	int a,b,n;//ʳƷ��� ʳƷ���� ʳƷ���� 
	cin>>a>>b>>n;
	for(int i=1;i<=n;i++){
		cin>>w1[i]>>w2[i]>>v[i];//���(<400) ����(<400) ������·��(<500)
	}
	for(int i=1;i<=n;i++){
		for(int j=a;j>=w1[i];j--){
			for(int k=b;k>=w2[i];k--){
				dp[j][k]=max(dp[j][k],dp[j-w1[i]][k-w2[i]]+v[i]);
			}
		}
	}
	cout<<dp[a][b];
	return 0;
}
