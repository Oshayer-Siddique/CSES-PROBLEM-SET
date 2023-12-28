#include<iostream>
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
using namespace std;
 
 
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;
 
 
const int   N   = (int) 1e6+5;
 
 
const int   M  = (int) 1e9+5;
 
 
const int   mod   = (int) 1000000007;
 
 
const int   max_prime  = (int) 1e6+3;
 
 
const int   BLKs  = (int) 70000;
 
 
const int   BLKspan  = (int) 700;
#define ll long long int
 
 
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
Faster;
    ll  n , k;
 
    cin >> n >> k;
 
    vector<ll> a(n);
    vector<pair<ll,ll>>v(n);
    for(int i = 0;i < n;i++){
         cin >> a[i];
         v[i] = {a[i],i};
 
    }
 
    ll i =0;
    ll j = n- 1;
    int flag = 0;
 
    ll p,q;
    sort(v.begin(),v.end());
    while(i < j){
        if(v[i].first + v[j].first > k){
            j--;
        }
        else if(v[i].first + v[j].first < k){
            i++;
        }
        else{
            p = v[i].second;
            q = v[j].second;
            flag = 1;
            break;
 
        }
    }
 
    if(flag == 1){
        cout<<p+1<<" "<<q+1<<endl;
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
 
 
}
