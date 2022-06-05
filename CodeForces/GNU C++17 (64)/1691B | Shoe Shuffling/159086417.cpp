#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
#define ld long double
#define endl "\n"
#define mod 1000000007
#define mod1 998244353
#define maxN 1e6+10
#define inf 1e14
#define sp " "
#define f first
#define s second
#define pii pair<int,int>
#define newline {cout<<endl;}
#define take(arr)            \
 {                        \
  for (auto &el : arr) \
   cin >> el;       \
 }
#define logg(arr)             \
 {                         \
  for (auto el : arr)   \
   cout << el << sp; \
  cout << endl;         \
 }
#define pr(a)              \
 {                      \
  cout << a << endl; \
 }
 
long long modadd(ll a, ll b, ll m)
{
 return (a + b + m) % m;
}
 
long long modmul(ll a, ll b, ll m)
{
 return (a * b) % m;
}
 
long long binpow(long long a, long long b, long long m)
{
 a = a % m;
 long long res = 1;
 while (b > 0)
 {
  if (b & 1)
  {
   res = (res * a) % m;
  }
  a = (a * a) % m;
  b = b >> 1;
 }
 return res;
}
ll lcm(ll a, ll b)
{
 return (a * b) / __gcd(a, b);
}
 
 
 
 
 
void ah_shit_here_we_go_again() {
 int n;
 cin >> n;
 vector<int>v(n);
 take(v);
 map<int, int> mp;
 for (auto el : v) {
  mp[el]++;
 }
 for (auto it : mp) {
  if (it.second == 1) {
   pr(-1);
   return;
  }
 }
 vector<int> ans(n);
 for (int i = 0 ; i < n ; i++) {
  ans[i] = i;
 }
 for (int i = 0 ; i < n ; i++) {
  int j = i;
  while (j < n && v[i] == v[j]) {
   j++;
  }
  int l = i , r = j - 1;
  int temp = ans[i];
  for (int k = l ; k < r ; k++) {
   ans[k] = ans[k + 1];
  }
  ans[r] = temp;
  i = j - 1;
 }
 for (int i = 0 ; i < n ; i++) {
  cout << ans[i] + 1 << sp;
 }
 cout << endl;
 return;
}
 
bool multi = true;
int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int t = 1;
 if (multi) {
  cin >> t;
 }
 while (t--) {
  ah_shit_here_we_go_again();
 }
 return 0;
}