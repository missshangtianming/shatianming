#include<cstdio>
#include<iostream>
#include <cmath>
#include<string>
using namespace std;
string a[21],b;
int a2[21];
int n,len=0;
void dp(string x)
{
	if(x.length()>len) len=x.length();
	for(int i=0;i<n;i++)
	for(int i1=1;i1<=x.size();i1++)
	{
		if(x.substr(x.size()-i1,i1)==a[i].substr(0,i1)&&a2[i]<2&&i1!=a[i].length())
		{
			a2[i]++;
			dp(x.substr(0,x.size()-i1)+a[i]);
			a2[i]--;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a2[i]=0;
		cin>>a[i];
	}
	cin>>b;
	dp(b);
	cout<<len<<endl;
}
