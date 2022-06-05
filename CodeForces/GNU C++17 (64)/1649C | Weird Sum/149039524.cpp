#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
vector<long long> x_axis[100005],y_axis[100005];
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin>>n>>m;
    long long maxi = INT_MIN,mini = INT_MAX,ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            long long u;
            cin>>u;
            x_axis[u].push_back(i);
            y_axis[u].push_back(j);
            maxi = max(maxi,u);
            mini = min(mini,u);
        }
    }
    for(int i=mini;i<=maxi;i++){
        sort(x_axis[i].begin(),x_axis[i].end());
        sort(y_axis[i].begin(),y_axis[i].end());
    }
    for(int i=mini;i<=maxi;i++){
        long long sz = x_axis[i].size();
        if(sz<=1){
            continue;
        }
        long long sum = 0;
        for(int j=0;j<sz;j++){
            sum+=x_axis[i][j];
        }
        for(int j=0;j<sz-1;j++){
            ans = ans + sum - (sz-j)*x_axis[i][j];
            sum-=x_axis[i][j];
        }
        sum = 0;
        for(int j=0;j<sz;j++){
            sum+=y_axis[i][j];
        }
        for(int j=0;j<sz-1;j++){
            ans = ans + sum - (sz-j)*y_axis[i][j];
            sum-=y_axis[i][j];
        }
        
    }
    cout<<ans<<" ";
    return 0;
}