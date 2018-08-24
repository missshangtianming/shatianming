#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int s,lessons[10005][3];//课程数量 课程开始时间，课程持续时间 提升的等级 
int n;//赛道数量 赛道持续时间 赛道使用等级 
int mintime[110];
int t;//可滑雪时间 

int jiyihua[10010][101];
int f(int i,int j){
	if(jiyihua[i][j]!=0) return jiyihua[i][j];
	if(i>t) return 0;//ok
	int ans=f(i+1,j);//ok
	if(mintime[j]+i<=t){//ok
	ans=max(ans,(f(mintime[j]+i,j))+1);//ok
	}
	for(int k=1;k<=s;k++){//ok
		if(lessons[k][0]==i){//
			ans=max(ans,f(i+lessons[k][1],lessons[k][2]));
		}
	}
	jiyihua[i][j]=ans;
	return ans;
}

int main(){
	
	cin>>t>>s>>n;
	for(int i=1;i<=s;i++){
		cin>>lessons[i][0]>>lessons[i][1]>>lessons[i][2];
	}
	
	for(int i=0;i<=100;i++){
		mintime[i]={1000000};
	}
	
	for(int i=1,a,b;i<=n;i++){
		cin>>a>>b;
		for(int j=a;j<=100;j++){
			mintime[j]=min(mintime[j],b);
		}
	}
	
	cout<<f(0,1);//第几小时 自身段位多少  
}
