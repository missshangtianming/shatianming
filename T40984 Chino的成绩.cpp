#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
long long int n,m,mmax=0;
long long int jiyihua[10001][101];
long long int rp[10001][101];//ÿһ���׶ε�ÿһ��rp
long long int jieduan[10001];
long long int dpdp(long long int which,long long int day){//�ڼ��� �ڼ��� 
	if(jiyihua[which][day]!=0){
		return jiyihua[which][day];
	}//���仯 
	long long int jj=0;
	if(day==n){
		return rp[which][jieduan[which]];
	}//����Ѿ�����Ԥ������ 
	jieduan[which]+=1;
	for(long long int i=0;i<m;i++){
		long long int ax=dpdp(i,day+1);//��i������ ��1�� 
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
		mmax=max(dpdp(i,1),mmax);//��i������ ��1�� 	
	}
	cout<<mmax;
}
