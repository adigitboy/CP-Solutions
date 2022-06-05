#include <bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
 
template <class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template <class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n, k;
    cin >> n >> k;
    vector<vector<long long>> v(n,vector<long long>(3,0));
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }
    vector<long long> alice, bob, ab;
    for (int i = 0; i < n; i++)
    {
        if (v[i][1] == 1 && v[i][2] == 0)
        {
            alice.push_back(v[i][0]);
        }
        else if (v[i][2] == 1 && v[i][1] == 0)
        {
            bob.push_back(v[i][0]);
        }
        else if (v[i][1] == 1 && v[i][2] == 1)
        {
            ab.push_back(v[i][0]);
        }
    }
    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());
    sort(ab.begin(), ab.end());
 
    long long ans = 0;
    long long fidx = min(alice.size(), bob.size());
    long long sidx = ab.size();
    long long cnt = 0;
 
    if (fidx == 0)
    {
        for (int i = 0; i < min(k,sidx); i++)
        {
            ans += ab[i];
            cnt++;
        }
        if (cnt < k)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
    else
    {
        long long sf = 0, ss = 0, cnt = 0;
        while (1)
        {
            if (sf < fidx && ss < sidx)
            {
                if (alice[sf] + bob[sf] < ab[ss])
                {
                    ans = ans + alice[sf] + bob[sf];
                    sf++;
                }
                else
                {
                    ans = ans + ab[ss];
                    ss++;
                }
                cnt++;
            }
            else if (sf < fidx)
            {
                ans = ans + alice[sf] + bob[sf];
                sf++;
                cnt++;
            }
            else if (ss < sidx)
            {
                ans = ans + ab[ss];
                ss++;
                cnt++;
            }
            else
            {
                break;
            }
            if (cnt == k)
            {
                break;
            }
        }
        if (cnt == k)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
 
    return 0;
}