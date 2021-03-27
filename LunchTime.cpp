// https://www.codechef.com/LTIME94C/problems/LUNCHTIM

#include <bits/stdc++.h>
using namespace std;

void solve(int test=0)
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &i: a) cin >> i;

    for (int i=0; i<n; i++){
        int c1 = 0;
        for (int j=i+1; j<n; j++){
            if (a[i] < a[j]){
                break;
            } else if (a[i] == a[j]){
                c1++;
            }
        }
        int c2 = 0;
        for (int j=i-1; j>=0; j--){
            if (a[i] < a[j]){
                break;
            } else if (a[i] == a[j]){
                c2++;
            }
        }
        cout << c1+c2 << " ";
    }

    cout << endl;
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
1
5
1 2 2 3 2
Example Output
0 1 1 0 0

*/
