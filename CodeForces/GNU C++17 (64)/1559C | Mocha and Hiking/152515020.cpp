#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
#define ll long long
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main()
{
    
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll i;
        int ok = -1;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1 && ok == -1)
                ok = i;
        }
        vector<ll> v1;
        if (ok == -1)
        {
            for (i = 1; i <= n + 1; i++)
                v1.push_back(i);
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (i != ok)
                {
                    v1.push_back(i + 1);
                }
                else
                {
                    v1.push_back(n + 1);
                    v1.push_back(i + 1);
                }
            }
        }
        for (auto x : v1)
            cout << x << " ";
 
        cout << "\n";
    }
 
    return 0;
}