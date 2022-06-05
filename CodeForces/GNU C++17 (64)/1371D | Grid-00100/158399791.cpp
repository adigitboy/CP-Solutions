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
        long long n,k;
        cin>>n>>k;
        vector<vector<long long>> grid(n,vector<long long>(n,0));
        long long gap = 0;
        while(k>0){
 
            for(int i=0,j=gap;i<n;i++,j++){
                j=j%n;
                grid[i][j]=1;
                k--;
                if(k==0){
                    break;
                }
            }
            gap++;
        }
        
        long long maxi = INT_MIN,mini = INT_MAX;
        for(int i=0;i<n;i++){
            long long cnt=0;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    cnt++;
                }
            }
            maxi = max(maxi,cnt);
            mini = min(mini,cnt);
        }
        long long ans = 2*(maxi-mini)*(maxi-mini);
        cout<<ans<<"\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                cout<<grid[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}