#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
/*
û�оͰѵ�һλ��ȥ��������
���û�оͷ�����һ���ڵ� 
*/
int n;
string b[21];// ��¼���� 
int sum=0;//���� 
void find(string a)
{
	//string a,b;//a��long b��a[j]
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
	find(a);//���ҵĵ��� 
	cout<<sum;
}
