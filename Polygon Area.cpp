#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    vector<pair<ll,ll>>vp;
    ll x,y;
    for(int i = 0;i < n;i++){
        cin >> x >> y;
        vp.push_back(make_pair(x,y));
    }
    ll ans = 0;
    ll x1,y1,x2,y2;
    for(int i = 0;i < n;i++){
        x1 = vp[i].first;
        y1 = vp[i].second;
        x2 = vp[(i+1) % n].first;
        y2 = vp[(i+1) % n].second;
        ans += (x1 * y2 - x2*y1);
 
    }
    cout<<abs(ans)<<endl;
 
 
}
