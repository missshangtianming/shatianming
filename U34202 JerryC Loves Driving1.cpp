#include<cstdio>
#include<iostream>
#include <cmath>
using namespace std;
int poww(int x,int y)
{
	if(y%2==0) return 1;
	else return -1;
}
int main()
{
	int sum=0;
	int i=5;
		for(int j=1;j<=i;j++)
		{
			sum+=(i/j)*poww(-1,j);
		}
	printf("%d",sum);
}
