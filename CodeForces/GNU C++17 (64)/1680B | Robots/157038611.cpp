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
        vector<vector<char>> grid(n,vector<char>(m,'.'));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
            }
        }
        pair<long long,long long> topMost;
        pair<long long,long long> leftMost;
        bool flag1=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='R'){
                    
                    topMost.first=i;
                    topMost.second=j;
                    flag1=true;
                    break;
                }
            }
            if(flag1){
                break;
            }
        }
        flag1=false;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(grid[i][j]=='R'){
                    leftMost.first=i;
                    leftMost.second=j;
                    flag1=true;
                    break;
                }
            }
            if(flag1){
                break;
            }
        }
        bool flag=true;
        // cout<<leftMost.first<<" "<<leftMost.second<<"\n";
        // cout<<topMost.first<<" "<<topMost.second<<"\n";
        if(leftMost.first>topMost.first){
            flag=false;
        }
        if(topMost.second>leftMost.second){
            flag=false;
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
 
 
    }
    return 0;
}