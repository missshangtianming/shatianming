#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int n;
char board[105][105];
char yizhong[8]={"yizhong"};
queue<int> x,y;
int ight[]={0,1,-1};
void move(int x,int y,int z)
{
	if(z==5) cout<<x<<" "<<y<<" "<<z<<endl;
	if(x<0||y<0) return;
	if(z==6)
	{
		//for(int i=0;i<n;i++){
		//	for(int j=0;j<n;j++){
		//		cout<<board[i][j]<<" ";}cout<<endl;}
		//cout<<endl;
		return;
	}
	if(board[x+1][y]==yizhong[z+1]){
		move(x+1,y,z+1);
	}
	if(board[x-1][y]==yizhong[z+1]){
		move(x-1,y,z+1);
	}
	if(board[x+1][y+1]==yizhong[z+1]){
		move(x+1,y+1,z+1);
	}
	if(board[x+1][y-1]==yizhong[z+1]){
		move(x+1,y-1,z+1);
	}
	if(board[x-1][y+1]==yizhong[z+1]){
		move(x-1,y+1,z+1);
	}
	if(board[x-1][y-1]==yizhong[z+1]){
		move(x-1,y-1,z+1);
	}
	if(board[x][y+1]==yizhong[z+1]){
		move(x,y+1,z+1);
	}if(board[x][y-1]==yizhong[z+1]){
		move(x,y-1,z+1);
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
	cin>>board[i][j];
	if(board[i][j]=='y')
	{
	x.push(i);
	y.push(j);	
	}	
	}	
	}
	while(!x.empty()&&!y.empty())
	{
		move(x.front(),y.front(),0);
		//cout<<x.front()<<" "<<y.front()<<endl;
		//cout<<endl;
		x.pop();
		y.pop();
	}
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<" ";}cout<<endl;}
		cout<<endl;
}
