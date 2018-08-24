#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
/*
两个单词相连时，其重合部分合为一部分
string a,b;
	cin>>a>>b;
	int y=a.size();
	for(int i=0;i<=a.length();i++)
	{		if(a.substr(i)==b.substr(0,y))
			{
			cout<<a.substr(i)<<" "<<b.substr(0,y)<<endl;
					break;
			}
					y--;	
	} 
*/
int main()
{
	int n;
	cin>>n;
	string a,b[n];//a是long b是a[j]
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cin>>a;
	for(int j=0;j<n;j++)
	{
	int y=a.size();
	for(int i=0;i<=a.length();i++)
	{	if(a.substr(i)==b[j].substr(0,y))
		{
				cout<<a.substr(0,i)+b[j]<<endl;
				break;
	}
	y--;	
	}
	}
}
