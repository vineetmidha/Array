// https://www.codechef.com/START2C/problems/NOBEL

#include <bits/stdc++.h>
using namespace std;

void solve(int test=0)
{
    int n, m;
    cin >> n >> m;

    set<int> topics;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        topics.insert(x);
    }

    if (topics.size()!=m)
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++){
    
        solve();

    }
    
    return 0;
}
