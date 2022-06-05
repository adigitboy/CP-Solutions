#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
typedef std::vector<long long> vi;
#define F first
#define S second
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
#define PB push_back
#define MP make_pair
#define PI 3.14159265358979323846
#define all(a) a.begin(), a.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
const ll INF = LLONG_MAX / 2;
const ll N = 2e5 + 1;
using namespace std;
bool possible(ll len, ll s, ll n)
{
    ll maxis = 0, minis = 0, c = n, d = 1;
    fr(i, 0, len)
    {
        maxis += c;
        minis += d;
        d++;
        c--;
    }
    if (s > maxis || s < minis)
    {
        return false;
    }
    return true;
}
int main()
{
    fast;
    ll t = 1;
    std::cin >> t;
    while (t--)
    {
        ll n, l, r, s;
        cin >> n >> l >> r >> s;
        ll maxis = 0, minis = 0, c = n, d = 1;
        fr(i, l, r + 1)
        {
            maxis += c;
            minis += d;
            d++;
            c--;
        }
        if (s > maxis || s < minis)
        {
            cout << "-1\n";
            continue;
        }
        ll len = r - l + 1;
        vi v;
        map<ll, ll> mp;
        rf(i, n, 1)
        {
            if (s - i >= 0 && possible(len - 1, s - i, i - 1))
            {
                s = s - i;
                len--;
                v.PB(i);
                mp[i]++;
            }
            if (s == 0)
                break;
        }
        if (s != 0)
        {
            cout << "-1\n";
            continue;
        }
        vi v1;
        fr(i, 1, n + 1)
        {
            if (mp.find(i) == mp.end())
                v1.PB(i);
        }
        ll j = 0, k = 0;
        fr(i, 1, l)
        {
            cout << v1[j++] << " ";
        }
        fr(i, l, r + 1)
        {
            cout << v[k++] << " ";
        }
        fr(i, r + 1, n + 1)
        {
            cout << v1[j++] << " ";
        }
        cout << "\n";
    }
}