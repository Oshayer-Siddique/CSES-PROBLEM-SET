//Line Segment Intersection

#include<bits/stdc++.h>
#define ll long long
 
using namespace std;
 
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
 
int on_segment(ll xa,ll ya ,ll xb , ll yb, ll xc , ll yc){
 
    if((min(xa, xb) <= xc and xc <= max(xa,xb)) and (min(ya,yb) <= yc and yc  <= max(ya,yb))){
        return 1;
    }
    else{
        return 0;
    }
 
 
}
 
 
int main()
{
 
    int t;
    cin >> t;
    while(t--)
    {
 
 
        ll x1,y1,x2,y2,x3,y3,x4,y4,or1,or2,or3,or4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
 
        or1 = ori(x1,y1,x2,y2,x3,y3);
        or2 = ori(x1,y1,x2,y2,x4,y4);
        or3 = ori(x3,y3,x4,y4,x1,y1);
        or4 = ori(x3,y3,x4,y4,x2,y2);
        if(or1 != or2  and or3 != or4)
        {
            cout<<"YES"<<endl;
        }
        else if((or1 == 0) and (on_segment(x1,y1,x2,y2,x3,y3)) == 1)
        {
            cout<<"YES"<<endl;
        }
        else if((or2 == 0) and (on_segment(x1,y1,x2,y2,x4,y4)) == 1)
        {
            cout<<"YES"<<endl;
        }
        else if((or3 == 0) and (on_segment(x3,y3,x4,y4,x1,y1)) == 1)
        {
            cout<<"YES"<<endl;
        }
        else if((or4 == 0) and (on_segment(x3,y3,x4,y4,x2,y2)) == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
 
 
    }
}
