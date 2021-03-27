
// https://mycode.prepbytes.com/problems/arrays/BLNCHGHT

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> heightA (n);
    int sumA = 0;
    
    for (auto &i: heightA) cin >> i, sumA += i;

    vector<int> heightC (n);
    int sumC = 0;

    for (auto &i: heightC) cin >> i, sumC += i;

    if (sumC - sumA > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    
    while (t--){
    
        solve();

    }  
  return 0;
}

/*

Example
Input
2
5
4 2 1 9 10
9 3 5 9 15
1
2
3

Output
YES
NO

*/
