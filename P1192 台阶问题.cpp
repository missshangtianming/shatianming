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
	cin>>k>>n;//K ��̨�ף����� 1 ��������� N ��̨��
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	cout<<f(k,n)+1;//��ԭ�㿪ʼ 
}
