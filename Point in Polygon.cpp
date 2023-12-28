#include<bits/stdc++.h>
#define ll long long
#define ii pair<ll,ll>
#define maximum INT_MAX
#define minimum INT_MIN
 
using namespace std;
 
 
ll on_segment(ll xa,ll ya ,ll xb , ll yb, ll xc , ll yc){
 
    if((min(xa, xb) <= xc and xc <= max(xa,xb)) and (min(ya,yb) <= yc and yc  <= max(ya,yb))){
        return 1;
    }
    else{
        return 0;
    }
 
 
}
 
ll ori(ll xa,ll ya,ll xb, ll yb, ll xc, ll yc)
{
 
    ll det = (xa*yb + xb*yc + xc*ya) - (xb*ya + xc*yb + xa*yc);
    if(det > 0)
    {
        return 1;
    }
    else if(det < 0)
    {
        return 2;
    }
    else
    {
        return 0;
    }
 
 
}
 
ll intersect(ii a, ii b , ii c, ii d){
    ll x1 = a.first, y1 = a.second, x2 = b.first, y2 = b.second, x3 = c.first , y3 = c.second,x4 = d.first,y4 = d.second;
 
       ll  or1 = ori(x1,y1,x2,y2,x3,y3);
       ll  or2 = ori(x1,y1,x2,y2,x4,y4);
       ll  or3 = ori(x3,y3,x4,y4,x1,y1);
       ll  or4 = ori(x3,y3,x4,y4,x2,y2);
       if(or1 != or2 and or3 != or4){
        return 1;
       }
       else{
        return 0;
       }
 
 
 
}
 
 
 
 
 
int main(){
    int n , m;
    cin >> n >> m;
 
 
    vector<pair<ll,ll>>vertices;
    for(int i = 0;i < n;i++){
        int x,y;
        cin >> x >> y;
        vertices.push_back(make_pair(x,y));
    }
 
    vector<pair<ll,ll>>points;
    for(int i = 0;i < m;i++){
        int x,y;
        cin >> x >> y;
        points.push_back(make_pair(x,y));
    }
 
    for(ii cp : points){
        pair<ll,ll> endp = {maximum,maximum+1};
        ll cnt = 0;
        int boundary = 0;
        for(int i = 0;i < n;i++){
            ii a = vertices[i];
            ii b = vertices[(i+1) % n];
            if(ori(a.first,a.second,b.first,b.second,cp.first,cp.second) == 0 and on_segment(a.first,a.second,b.first,b.second,cp.first,cp.second) == 1){
                boundary = 1;
                break;
 
            }
            if(intersect(a,b,cp,endp) == 1){
                cnt++;
 
 
            }
 
        }
        if(boundary == 1){
            cout<<"BOUNDARY"<<endl;
        }
        else if(cnt % 2 == 1){
            cout<<"INSIDE"<<endl;
        }
        else if(cnt % 2 == 0){
            cout<<"OUTSIDE"<<endl;
        }
 
 
    }
 
 
}
