#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	short u[n+1];
	for(int i=1;i<=n;i++){
		cin>>u[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(u[i]<u[j]) swap(u[i],u[j]);
		}
	}
	for(int i=1;i<=n;i++){
		cout<<u[i]<<" ";
	}
}
