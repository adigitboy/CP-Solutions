#include <bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        set<long long, greater<long long>> st;
        set<long long, greater<long long>> st1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(i + 1);
            st1.insert(v[i]);
        }
        vector<long long> ans(n, -1);
        if (st1.size() == n - 1)
        {
            map<long long, long long> mp;
            long long val;
            for (int i = 0; i < n; i++)
            {
                mp[v[i]]++;
            }
            for (int i = 1; i <= n; i++)
            {
                if (mp[i] == 0)
                {
                    val = i;
                }
            }
            cout << n - 1 << "\n";
            for (int i = 0; i < n; i++)
            {
                if (mp[v[i]] > 1 && val != i + 1)
                {
                    cout << val << " ";
                    mp[v[i]] = 0;
                }
                else
                {
                    cout << v[i] << " ";
                }
            }
        }
        else
        {
            long long cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (i + 1 != v[i] && st.find(v[i]) != st.end())
                {
                    cnt++;
                    ans[i] = v[i];
                    st.erase(st.find(v[i]));
                }
            }
            cout << cnt << "\n";
            for (int i = 0; i < n; i++)
            {
                if (ans[i] != -1)
                {
                }
                else
                {
                    auto it = st.begin();
                    long long lastidx;
                    if (*it != i + 1)
                    {
                        ans[i] = *it;
                        st.erase(it);
                        lastidx = i;
                    }
                    else
                    {
                        if (it != (--st.end()))
                        {
                            it++;
                            ans[i] = *it;
                            st.erase(it);
                            lastidx = i;
                        }
                        else
                        {
                            ans[i] = *it;
                            swap(ans[i], ans[lastidx]);
                        }
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
        }
 
        cout << "\n";
    }
    return 0;
}