#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // set<int> s;
    // s.insert(0);
    // s.insert(8);
    // s.insert(3);

    // for(auto it = s.begin(); it != s.end();it++){
    //     cout<<*it<<" ";
    // }

    // auto it  = s.upper_bound(3);
    // auto it1 = it;
    // it1--;
    // it1--;

    // cout<<*it<<endl;
    // cout<<*it1<<endl;

    long long int x, n;
    cin >> x >> n;

    set<int> lights;
    multiset<int> distance;
    lights.insert(0);
    lights.insert(x);
    distance.insert(x);

    for (int i = 0; i < n; i++)
    {
        int light;
        cin >> light;
        lights.insert(light);

        auto right = lights.upper_bound(light);
        auto left = right;
        left--;
        left--;

        int m = *right - *left;

        distance.erase(distance.find(m));

        distance.insert(*right - light);
        distance.insert(light - *left);

        // cout<<m<<endl;
        // cout<<*right<<endl;
        // cout<<*left<<endl;

        // for (auto it = distance.begin(); it != distance.end(); it++)
        // {
        //     cout << *it << " ";
        // }

        //cout<<*max_element(distance.begin(),distance.end())<<" ";

        cout<<*distance.rbegin()<<" ";
    }

    //     for(auto it = lights.begin(); it != lights.end();it++){
    //     cout<<*it<<" ";
    // }
}