#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((int)x.size())
const int MOD = 1e9 + 7;
int add(long long a, long long b){return ((a%MOD)+(b%MOD))%MOD;}
int mult(long long a, long long b){return ((a%MOD)*(b%MOD))%MOD;}
 
const int N = 2e5 + 10;
 
int dp[N][5];
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  memset(dp, 0, sizeof(dp));
  int n, l, r;
  cin >> n >> l >> r;
  int m0 = r / 3 - l / 3 + (l % 3 == 0);
  int m1 = (r / 3 + (r % 3 >= 1)) - (l % 3 == 0 ? l / 3 : (l % 3 == 1 ? l / 3 : l / 3 + 1));
  int m2 = r - l + 1 - (m0 + m1);
  dp[0][0] = m0;
  dp[0][1] = m1;
  dp[0][2] = m2;
  assert(m0 + m1 + m2 == r - l + 1);
  for (int i = 1; i < n; i++) {
    dp[i][0] = add(dp[i][0], mult(dp[i - 1][0], m0));
    dp[i][0] = add(dp[i][0], mult(dp[i - 1][1], m2));
    dp[i][0] = add(dp[i][0], mult(dp[i - 1][2], m1));
    dp[i][1] = add(dp[i][1], mult(dp[i - 1][0], m1));
    dp[i][1] = add(dp[i][1], mult(dp[i - 1][1], m0));
    dp[i][1] = add(dp[i][1], mult(dp[i - 1][2], m2));
    dp[i][2] = add(dp[i][2], mult(dp[i - 1][0], m2));
    dp[i][2] = add(dp[i][2], mult(dp[i - 1][1], m1));
    dp[i][2] = add(dp[i][2], mult(dp[i - 1][2], m0));
  }
  cout << dp[n - 1][0] << '\n';
  return 0;
}