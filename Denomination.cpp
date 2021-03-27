// https://mycode.prepbytes.com/problems/arrays/DENOM

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  
  vector<int> deno {1,2,5,10,20,50,100,500,1000};
  
  while (t--){
    int n;
    cin >> n;

    int ans = 0;
    
    for (int i=deno.size()-1; i>=0; i--){
      if (n >= deno[i]){
        ans += n/deno[i];
        n %= deno[i];
        if (n==0) break;
      }
    }

    cout << ans << endl;
  }
  
  return 0;
}
