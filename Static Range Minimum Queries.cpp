#include<bits/stdc++.h>
#define mx 200001
#define ll long long
using namespace std;
int arr[mx];
int tree[mx*3];
 
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
 
int main(){
 
    ll n,q;
    cin >> n >> q;
    for(ll i = 1;i <= n;i++){
        cin >> arr[i];
    }
    init(1,1,n);
    ll ans;
 
    ll a, b;
 
    for(ll i = 0;i < q;i++){
        cin>> a>> b;
        ans = query(1,1,n,a,b);
        cout<<ans<<endl;
 
    }
 
 
 
}
 
