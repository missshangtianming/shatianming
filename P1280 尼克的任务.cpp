#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n,k;
struct task{
	int st,ct;
};
task t[10005];
int dp[10005];
int sum[10005]={0};
bool cmp(task a,task b) {
    return a.st>b.st;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>t[i].st>>t[i].ct;
		sum[t[i].st]++;
	}
	sort(t+1,t+n+1,cmp);
	/*for(int i=0;i<=n;i++){
		if(sum[i]==0){//����ڵ�ǰʱ��û������ 
			dp[i+1]=dp[i]+1;
		}
		else{//��ǰ������
		sum[i]--; 
			for(int j=1;j<=k;j++){
				if(t[j].st==i){
					//dp[i]=max(dp[i+t[j].e ],dp[i]);
					dp[i]=max(dp[i+t[j].ct],dp[i]);
				}
			}
		}
	}*/
	int now=1;
	for(int i=n;i>=1;i--){
		if(!sum[i])dp[i]=dp[i+1]+1;
        else for(int k=1;k<=sum[i];k++,now++) dp[i]=max(dp[i],dp[i+t[now].ct]);
        //��sch[i]���������� �ҵ�һ������ʹ�� f[i+�������ĳ���ʱ��] ��� 
    }
	cout<<dp[1];
	return 0;
}
/*
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int now;
struct miss
{
    int st;//��ʼʱ��
    int la;//����ʱ��
};
bool cmp(miss a,miss b)
{
    return a.st>b.st;    //���տ�ʼʱ���ɺ���ǰ����
}
struct miss m[10001];
int mis[10001];//mis[i]��ʾ��ʱ��iʱ��ʼ��������
int f[10001];
int n,k;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>m[i].st>>m[i].la;
        mis[m[i].st]++;//ͳ��������
    }
    sort(m+1,m+1+k,cmp);
    for(int i=n,now=1;i>=1;i--)
    {
        if(!mis[i])//���õ�û���������
            f[i]=f[i+1]+1;
        else
        {
            for(int k=1;k<=mis[i];k++,now++)//now���������ڼ�������
            {
                f[i]=max(f[i],f[i+m[now].la]);
            }
        }
    }
    cout<<f[1];
    //system("pause");
    return 0;    
}
