#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n,m;
        cin>>n>>m;
        vector<pair<long long,long long>> v(n*m);
        for(int i=0;i<(n*m);i++){
            cin>>v[i].first;
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        vector<vector<pair<long long,long long>>> grid(n+1,vector<pair<long long,long long>>(m+1,{0,0}));
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j].first = v[i*m+j].first;
                grid[i][j].second = v[i*m+j].second;
            }
        }
        long long ans = 0;
        for(int i=0;i<n;i++){
            for(int j=m-1;j>=1;j--){
                long long cnt = 0;
                for(int k=j-1;k>=0;k--){
                    if(grid[i][k].first!=grid[i][j].first){
                        if(grid[i][k].second<grid[i][j].second){
                            cnt++;
                        }
                    }
                }
                ans+=cnt;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}