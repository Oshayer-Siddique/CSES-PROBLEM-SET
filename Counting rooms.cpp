#include <iostream>
using namespace std;
char arr[1001][1001];
int vis[1001][1001];
 
int N,M;
int isvalid(int x,int y)
{
    if ( x < 1 || x > N || y < 1 || y > M)
        return 0;
    if (vis[x][y] == 1 || arr[x][y] == '#')
        return 0;
    else
        return  1;
}
 
void dfs(int x,int y)
{
    vis[x][y] = 1;
    if (isvalid(x-1,y) == 1)
        dfs(x-1,y);
    if (isvalid(x,y-1) == 1)
        dfs(x,y-1);
    if (isvalid(x,y+1) == 1)
        dfs(x,y+1);
    if (isvalid(x+1,y) == 1)
        dfs(x+1,y);
}
 
int main()
{
    cin>>N>>M;
    for(int i = 1;i<=N;i++)
    {
        for(int j = 1;j<=M;j++)
        cin>>arr[i][j];
    }
    int cnt = 0;
    for(int i = 1;i<=N;i++)
    {
        for(int j = 1;j<=M;j++)
        if (arr[i][j] == '.' && vis[i][j] == 0)
        dfs(i,j),cnt++;
 
    }
    cout<<cnt;
}
