#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 2e5 + 11;
 
struct Info
{
    int value;
    int index;
};
 
Info tree[4 * MAX];
 
void build(int a[], int node, int st, int end)
{
    if (st == end)
    {
        tree[node].value = a[st];
        tree[node].index = st + 1;
        return;
    }
    else
    {
        int mid = (st + end) / 2;
        build(a, 2 * node, st, mid);
        build(a, 2 * node + 1, mid + 1, end);
        if (tree[2 * node].value >= tree[2 * node + 1].value)
        {
            tree[node] = tree[2 * node];
        }
        else
        {
            tree[node] = tree[2 * node + 1];
        }
    }
}
 
int query(int node, int st, int end, int num)
{
    if (tree[node].value < num)
    {
        return 0;
    }
    if (st == end)
    {
        tree[node].value -= num;
        return tree[node].index;
    }
    else
    {
        int mid = (st + end) / 2;
        if (tree[2 * node].value >= num)
        {
            int idx = query(2 * node, st, mid, num);
 
            if (tree[2 * node].value >= tree[2 * node + 1].value)
            {
                tree[node] = tree[2 * node];
            }
            else
            {
                tree[node] = tree[2 * node + 1];
            }
            return idx;
 
        }
        else{
            int idx = query(2*node+1,mid+1,end,num);
            if(tree[2*node].value >= tree[2*node + 1].value){
                tree[node] = tree[2*node];
 
            }
            else{
                tree[node] = tree[2*node +1];
            }
            return idx;
 
 
            
        }
    }
}
 
 
void solve(){
    int n , m;
    cin >> n >> m;
    
    int h[n],r[m];
    for(int i = 0;i < n;i++){
        cin >> h[i];
    }
    for(int i = 0;i < m;i++){
        cin >> r[i];
    }
 
    build(h,1,0,n-1);
    for(int i = 0;i < m;i++){
        cout<<query(1,0,n-1,r[i])<<" ";
    }
}
 
int main(){
    solve();
}
