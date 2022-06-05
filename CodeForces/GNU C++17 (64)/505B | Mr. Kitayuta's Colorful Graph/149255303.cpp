#include <iomanip> 
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include<iostream>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include<cmath>
#include <stdlib.h>
#include <math.h>    
#include <string.h>
#include <time.h>
#include <bitset>
#include <map>
#include <queue>
#include <set>
#include <sstream>
//#define lp(i,n)    for(int i=0;(int)i<n;++i)
typedef long long ll;
using namespace std;
const int MAX = 1e18+9;
//freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
void fast() {
 std::ios_base::sync_with_stdio(0);
}
 
int n, m, q, ans = 0;
bool vis[109];
bool Cvis[109];
vector <pair<int, int>>adjl[150];
 
void dfs(int cur, int endd, int col)
{
 if (vis[cur])
 {
  return;
 }
 
 vis[cur] = 1;
 
 if (cur == endd)
 {
  ans++;
  return ;
 }
 
 for (int i = 0; i < adjl[cur].size(); i++)
 {
 
  if (adjl[cur][i].second == col&&!vis[adjl[cur][i].first])
  { 
   dfs(adjl[cur][i].first, endd, col);
  }
 }
}
 
int main()
{
 cin >> n >> m;
 
 int x, y, c;
 while (m--)
 {
  scanf("%d%d%d", &x, &y, &c);
  adjl[x].push_back({ y,c });
  adjl[y].push_back({ x,c });
 }
 
 cin >> q;
 while (q--)
 {
  scanf("%d%d", &x, &y);
  for (int i = 0; i < adjl[x].size(); i++)
  {
   if (!Cvis[adjl[x][i].second])
   {
    Cvis[adjl[x][i].second] = 1;
    dfs(x, y, adjl[x][i].second);
    memset(vis, 0, sizeof vis);
   }
  }
  memset(Cvis, 0, sizeof Cvis);
 
  cout << ans << endl;
  ans = 0;
 
 }
  
 
 return 0;
}