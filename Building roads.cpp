#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;
 
vector <int> v[100001];
bool vis[100001];
 
 
void dfs(int s)
{
    vis[s] = 1;
    for(int i = 0; i < v[s].size(); i++)
    {
        if(vis[v[s][i]] == 0)
        {
            dfs(v[s][i]);
        }
    }
 
 
 
 
}
 
 
int main()
{
    int n,e,x,y;
    vi res;
    cin >> n >> e;
    for(int i = 0; i < e; i++)
    {
        cin >>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
 
    }
    //memset(vis,false,sizeof(vis));
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(vis[i] == false)
        {
            dfs(i);
            cnt++;
            res.push_back(i);
 
        }
    }
    cout <<cnt-1 << endl;
    for(int i = 1;i<res.size();i++){
        cout << res[i-1] << " "<< res[i] << endl;
    }
 
 
}
 
 
 
