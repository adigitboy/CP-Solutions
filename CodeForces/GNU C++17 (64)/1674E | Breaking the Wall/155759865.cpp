 
#include <iostream>
#include <iosfwd>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cassert>
#include <cctype>
#include <climits>
#include <vector>
#include <bitset>
#include <set>
#include <queue>
#include <math.h>
#include <stack>
#include <map>
#include <deque>
#include <string>
#include <list>
#include <iterator>
#include <sstream>
#include <complex>
#include <fstream>
#include <functional>
#include <numeric>
#include <utility>
#include <algorithm>
#include <assert.h>
#include <unordered_map>
#pragma GCC optimize ("-O3")
 
using namespace std;
 
#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 996244353
#define all(x) (x).begin(), (x).end()
#define INF 1e15
 
int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int array[n+2];
    for(int i = 1; i <= n; i++)  {
        cin >> array[i];
    }
    array[0] = INT_MAX;
    array[n+1] = INT_MAX;
    int ans = INT_MAX;
    for(int i = 2; i <= n; i++) {
        int x = min(array[i], array[i-1]);
        int y = max(array[i], array[i-1]);
        int temp_ans;
        if(y > (2*x))   {
            temp_ans = x;
            y -= 2*x;
            temp_ans += ((y+1)/2);
        } else  {
            temp_ans = (x+y+2)/3;
        }
        ans = min(ans, temp_ans);
    }
    for(int i = 2; i < n; i++)    {
        if(array[i-1] < array[i+1])
        ans = min(ans, array[i-1] + (array[i+1]-array[i-1]+1)/2);
        else 
            ans = min(ans, array[i+1] + (array[i-1]-array[i+1]+1)/2);
    }
    sort(array, array + n+2);
    ans = min(ans, (array[0]+1)/2 + (array[1]+1)/2);
    cout << ans << "\n";
    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 