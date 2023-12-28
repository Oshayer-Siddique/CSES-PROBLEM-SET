#include<bits/stdc++.h>
#define mx 200001
#define ll long long
using namespace std;
ll arr[mx];
ll tree[mx*3];
 
void init(ll node , ll b , ll e)
{
 
    if(b == e){
       tree[node] = arr[b];
       return;
    }
    ll left = 2*node;
    ll right = 2*node + 1;
    ll mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = min(tree[left],tree[right]);
}
 
ll query(ll node,ll b , ll e,ll i,ll j){
 
    if(i > e or j < b){
        return 1000000000;
    }
    if(b >= i and e <= j){
        return tree[node];
    }
    ll left = 2*node;
    ll right = 2 * node + 1;
    ll mid = (b + e)/2;
    ll p1 = query(left,b,mid,i,j);
    ll p2 = query(right,mid+1,e,i,j);
    return min(p1,p2);
 
 
}
void update(ll node, ll b, ll e, ll i,ll nval){
 
    if(i > e or i < b){
        return;
    }
    if(i <= b and i >= e){
        tree[node] = nval;
        return;
    }
    ll left = 2*node;
    ll right = 2 * node + 1;
    ll mid = (b+e)/2;
    update(left,b,mid,i,nval);
    update(right,mid+1,e,i,nval);
    tree[node] = min(tree[left],tree[right]);
 
 
}
 
int main(){
 
    ll n,a,b,t,ans,q;
    cin >> n>> q;
    for(int i = 1;i <= n;i++){
        cin >> arr[i];
    }
    init(1,1,n);
    for(int i = 0;i < q;i++){
        cin >> t >> a >> b;
        if( t ==1){
            update(1,1,n,a,b);
 
        }
        else if(t == 2){
            ans = query(1,1,n,a,b);
            cout<<ans<<endl;
 
 
        }
    }
 
 
 
 
}
