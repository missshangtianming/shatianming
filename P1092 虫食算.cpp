#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char zimu[]="yizhong";
	int n;
	cin>>n;
		char u[n+1];
		for(int j=0;j<n;j++)
		{
		for(int i=0;i<n;i++)
		{
			bool p=false;
			cin>>u[i];
			for(int i1=0;i1<7;i1++){
			if(u[i]==zimu[i1])
			{
				p=true;
				cout<<u[i];
				break;
			}
			}
			if(p==false)
			cout<<"*";
		}
		cout<<endl;
		}
}
