#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
long long int n,m,mmax=0;
long long int jiyihua[10001][101];
long long int rp[10001][101];//每一个阶段的每一个rp
long long int jieduan[10001];
long long int dpdp(long long int which,long long int day){//第几个 第几天 
	if(jiyihua[which][day]!=0){
		return jiyihua[which][day];
	}//记忆化 
	long long int jj=0;
	if(day==n){
		return rp[which][jieduan[which]];
	}//如果已经到达预计天数 
	jieduan[which]+=1;
	for(long long int i=0;i<m;i++){
		long long int ax=dpdp(i,day+1);//第i个方法 第1天 
		jj=max(jj,ax);
	}
	jieduan[which]-=1;
	jiyihua[which][day]=rp[which][jieduan[which]]+jj;
	return rp[which][jieduan[which]]+jj;
}
int main(){
	cin>>n>>m;
	for(long long int i=0;i<m;i++){
		for(long long int j=0;j<n;j++){
			cin>>rp[i][j];
		}
	}
	for(long long int i=0;i<m;i++){
		mmax=max(dpdp(i,1),mmax);//第i个方法 第1天 	
	}
	cout<<mmax;
}
