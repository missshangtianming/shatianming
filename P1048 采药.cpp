// luogu-judger-enable-o2
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int t,m,u=0,maxx=0;
int machine[105][3];
int dp(int time){
    if(time<0||m==0) return 0;
	maxx=u;
	for(int i=0;i<m;i++){//i-m
        if(machine[i][2]==0){
		m--;
        machine[i][2]=1;
        u=u+machine[i][1];
        maxx=max(maxx,dp(time-machine[i][0]));//i-m
		u=u-machine[i][1];
		m++;
        machine[i][2]=0;
							} }
		return maxx;
}
int main(){
	cin>>t>>m;
    for(int i=0;i<m;i++){
        cin>>machine[i][0]>>machine[i][1];//时间，价值 
    }
    
    cout<<dp(t)<<endl;//时间，以及搞到的草药价值 
}
