#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
/*
没有就把第一位给去掉再来搜
如果没有就返回上一个节点 
*/
int n;
string b[21];// 记录单词 
int sum=0;//长度 
void find(string a)
{
	//string a,b;//a是long b是a[j]
	for(int j=0;j<n;j++)
	{
		int y=a.size();
		for(int i=0;i<a.length();i++){
			if(a.substr(i)==b[j].substr(0,y)&&((a.find(b[j])!=-1&&b[j].find(a)!=-1)||(a.size()==1))&&a!=b[j]){
				cout<<a.substr(0,i)+b[j]<<endl;
				find(a.substr(0,i)+b[j]);
			}
		y--;	
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	string a;
	cin>>a;
	find(a);//查找的单词 
	cout<<sum;
}
