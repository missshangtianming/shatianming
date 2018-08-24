#include<cstdio>
#include<iostream>
using namespace std;
int max(int &x,int &y){return x>y?x:y;}
int a[1002],n,x,i,j,ans;
int main()
{
	scanf("%d",&n);
		for(i=n;i;i--)
				{for(j=i;j<=n;j++)
				{	
						scanf("%d",&x),a[j]=max(a[j],a[j+1])+x;
						for(int i=1;i<=n;i++)
						cout<<a[i]<<" ";
				}
					}
				
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,a[i]);
	}
	printf("%d",ans);
}
