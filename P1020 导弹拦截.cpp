#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
	int n;
	int v[100005];
	 while(cin>>v[n])n++;
	{n--;
	int maxx;
	int sum=0;
	int dp[100001]={1};
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
		if(v[i]>v[j]){
			maxx=max(dp[i],maxx);
			dp[i]++;
		}
		else {
		sum=sum+1;
		break;
	}
		}
	}
	cout<<maxx<<endl<<sum;
}
}
