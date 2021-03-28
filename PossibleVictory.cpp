// https://www.codechef.com/START2C/problems/T20MCH

#include <iostream>
using namespace std;

void solve(int test=0)
{
    int total_runs, overs_played, current_runs;
    cin >> total_runs >> overs_played >> current_runs;

    int target = total_runs;

    int balls_rem = (20 - overs_played) * 6;

    int scorable_runs = balls_rem * 6;

    if (current_runs + scorable_runs > target)
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main() {
    solve();    
    return 0;
}
