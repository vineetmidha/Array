// https://mycode.prepbytes.com/contest/INTERVIEWMARATHON21SEARCHING/problems/PLGAME

// WA

#include <bits/stdc++.h>
using namespace std;

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}

void solve(int test=0)
{
    int n, H, A;
    cin >> n >> H >> A;

    vector<pair<int,int>> power(n);

    for (int i=0; i<n; i++)
    {
        cin >> power[i].first >> power[i].second;
    }

    sort(power.begin(), power.end(), sortbysecdesc);

    for (int i=0; i < power.size(); i++)
    {
        int h = power[i].first;
        int a = power[i].second;

        if (h%a==0)
            H -= (a * h/a);
        else
            H -= (a * (h/a+1));

        if (H <= 0)
        {
            cout << 1 << endl;
            return;
        }

        power[i].first -= A;
    }

    cout << -1 << endl;
}

int main()
{
  int t;
  cin >> t;
  
  while (t--) solve();
  
  return 0;
}

