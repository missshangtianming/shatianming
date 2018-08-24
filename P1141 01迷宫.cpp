#include<cstdio>
#include<iostream>
using namespace std;
int board[1005][1005];
int sum;
int n,m;
int x2,y2;
void bfs(int x,int y){
	if(x<=n&&x>=0&&y<=n&&y>=0){
		int p=board[x][y];
		cout<<x<<" "<<y<<endl;
		if(board[x+1][y]!=board[x][y]&&board[x+1][y]!=-1){
		sum=sum+1;
		board[x][y]=-1;
		bfs(x+1,y);
		board[x][y]=p;
		}
		else if(board[x-1][y]!=board[x][y]&&board[x-1][y]!=-1){
		sum=sum+1;
		board[x][y]=-1;
		bfs(x-1,y);	
		board[x][y]=p;
		}
		else if(board[x][y+1]!=board[x][y]&&board[x][y+1]!=-1){
		sum=sum+1;
		board[x][y]=-1;
		bfs(x,y+1);	
		board[x][y]=p;
		}
		else if(board[x][y-1]!=board[x][y]&&board[x][y-1]!=-1){
		sum=sum+1;
		board[x][y]=-1;
		bfs(x,y-1);
		board[x][y]=p;
		}
							}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char a;
			cin>>a;
			if(a=='1'){
				board[i][j]=1;
			}
			else if(a=='0'){
				board[i][j]=0;
			}
		}
	}
	for(int i=0;i<m;i++){
		int x,y;
		sum=1;
		cin>>x>>y;
		bfs(x-1,y-1);
		cout<<sum<<endl;
	}
}
