#include <bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
 
        long long n;
 
        cin >> n;
        long long arr[n][n] = {0};
        long long i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j || i + j == n - 1)
                    arr[i][j] = 1;
                else
                    arr[i][j] = 0;
            }
        }
        arr[(n - 1) / 2][n - 1] = 1;
        arr[n - 1][(n - 1) / 2] = 1;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}