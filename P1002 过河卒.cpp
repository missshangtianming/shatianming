// luogu-judger-enable-o2
#include<cstdio>
#include<iostream>
using namespace std;
int t,m,maxx=0;
int machine[105][3];
void dp(int time,int sum){
    if(time<0||m==0){
        return ;
    }
    if(sum>maxx){
            maxx=sum;
        }
    for(int i=0;i<m;i++){
        if(machine[i][2]==0){
        m--;
        machine[i][2]=1;
        dp(time-machine[i][0],sum+machine[i][1]);
        m++;
        machine[i][2]=0;
}
    }
}
int main(){
    cin>>t>>m;
    for(int i=0;i<m;i++){
        cin>>machine[i][0]>>machine[i][1];//时间，价值 
    }
    dp(t,0);
    cout<<maxx<<endl;//时间，以及搞到的草药价值 
}
