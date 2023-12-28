#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
ll t;
cin >> t;
while(t--){
 
 
 
    ll x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    x2 -= x1;
    y2 -= y1;
    x3 -= x1;
    y3 -= y1;
 
    if(x2*y3 - x3*y2 < 0){
        cout<<"RIGHT"<<endl;
    }
    else if(x2*y3 - x3*y2 > 0){
        cout<<"LEFT"<<endl;
    }
    else{
        cout<<"TOUCH"<<endl;
    }
 
 
 
 
 
}
 
}