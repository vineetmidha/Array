// https://www.codechef.com/problems/MINEAT

// Binary Search application

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(int test=0)
{
    int n, h;
    cin >> n >> h;

    int a[n];

    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int left = 1, right = 1e9;
    int ans = right;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        int c = 0;

        for (int i=0; i<n; i++)
        {
            c += ceil((double)a[i]/(double)mid);
        }

        if (c <= h)
        {
            ans = min(mid,ans);
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << ans << endl;
}


signed main() {
    int t;
    cin >> t;
    
    while (t--) solve();
    
	return 0;
}
