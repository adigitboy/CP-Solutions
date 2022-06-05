#include<bits/stdc++.h>
#define int long long int
using namespace std;

void dfs(int i,int p,vector<int>& a,vector<vector<int>>& tree,vector<vector<int>>& dp)
{
    int min1=INT64_MAX, max1=INT64_MIN;
    for(int child: tree[i])
    {
        if(child==p)
        continue;

        dfs(child,i,a,tree,dp);
        min1=min(min1,dp[child][1]+a[child]);
        max1=max(max1,dp[child][0]+a[child]);
    }

    if(min1==INT64_MAX)
    {
         dp[i][0]=dp[i][1]=0;
         return;
    }

    dp[i][0]=min1;
    dp[i][1]=max1;

}

int32_t main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        int n,k;
        cin>>n>>k;
        
        vector<int> a(n+1);
        vector<vector<int>> tree(n+1);
        vector<vector<int>> dp(n+1,vector<int>(2)); //0 means Alice 1 means Bob

        for(int i=1;i<=n;i++)
        cin>>a[i];

        for(int i=1;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            tree[x].push_back(y);
            tree[y].push_back(x);
        }

        dfs(1,-1,a,tree,dp);
        cout<<dp[1][0]<<endl;

    }
    return 0;
}