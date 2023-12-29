#include<bits/stdc++.h>

using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;


    multiset<int> towers;

    for(int i = 0;i < n;i++){
        long long int cube;
        cin >> cube;
        //towers.insert(cube);
        auto it = towers.upper_bound(cube);


        // for (auto x = towers.begin(); x != towers.end(); x++)
        // {
        //     cout << *x <<endl;
        // }


        if(it == towers.end()){
            towers.insert(cube);
            //cout<<"NULL"<<endl;
        }
        else{
            towers.erase(it);
            towers.insert(cube);
            //cout<<*it<<endl;

        }

        

        






    }

    cout<<towers.size()<<endl;




}
