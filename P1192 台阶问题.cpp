#include<cstdio>
#include<iostream>
using namespace std;
int k,n;
int f(int i,int j)
{
if(j>n) return 0;
else if(j<=0) return 0;
else if(i<=0) 
{
	return 1;
}
return f(i-j,j)+f(i-j,j-1)+f(i,j-1);
}
int main()
{
	cin>>k>>n;//K 级台阶（最少 1 级）到达第 N 级台阶
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	cout<<f(k,n)+1;//从原点开始 
}
