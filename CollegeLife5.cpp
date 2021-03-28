// https://www.codechef.com/START2C/problems/COLGLF5

#include <bits/stdc++.h>
using namespace std;

void solve(int test=0)
{
    int n, m;
    cin >> n >> m;

    vector<int> f(n);
    vector<int> c(m);

    for (int i=0; i<n; i++){
        cin >> f[i];
    }
    for (int i=0; i<m; i++){
        cin >> c[i];
    }

    char current = 'f';
    int i=0, j=0;
    int ans=0;

    while (i<n && j<m){
        if (f[i] < c[j]){
            if (current == 'c'){
                ans++;
                current = 'f';
            }
            i++;
        } else {
            if (current == 'f'){
                ans++;
                current = 'c';
            }
            j++;         
        }
    }

    if (i<n && current=='c'){
        ans++;
    }
    if (j<m && current=='f'){
        ans++;
    }

    cout << ans << endl;
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

Sample Input:
3
2 2
1 3
2 4
3 1
100 200 300
1
1 2
1
100 200
Sample Output:
3
2
1

*/
