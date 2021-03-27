
// https://www.codechef.com/LTIME94C/problems/IMDB

#include <bits/stdc++.h>
using namespace std;

void solve(int test=0)
{
    int movies, storage;
    cin >> movies >> storage;

    vector<pair<int,int>> a;

    while (movies--){
        int s, r;
        cin >> s >> r;
        a.push_back({r,s});
    }

    sort(a.begin(), a.end(), greater<pair<int,int>>());

    for (auto i: a){
        if (i.second <= storage){
            cout << i.first << endl;
            break;
        }
    }
}

signed main() {
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++){
    
        solve();

    }
    
    return 0;
}

/*

Example Input
3
1 1
1 1
2 2
1 50
2 100
3 2
1 51
3 100
2 50
Example Output
1
100 
51

*/
