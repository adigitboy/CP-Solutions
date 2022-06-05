#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        vector<long long> v;
        map<long long,vector<long long>> mp;
        map<long long,long long> gap;
        for(int i=1;i<=n;i++){
            gap[i]=-1;
        }
        
        for(int i=0;i<n;i++){
            long long u;
            cin>>u;
            v.push_back(u);
        }
        
        for(int i=0;i<n;i++){
            mp[v[i]].push_back(i);
        }
        for(auto it : mp){
            vector<long long> a=it.second;
            for(int i=0;i<a.size()-1;i++){
                // cout<<a[i+1]<<" "<<a[i]<<"\n";
                gap[it.first]=max(gap[it.first],a[i+1]-a[i]);
            }
            if(a.size()>0){
                
                gap[it.first]=max(gap[it.first],max(a[0]+1,n-a[a.size()-1]));
                
            }
        }
        map<long long,long long> ans;
        for(auto it : gap){
            // cout<<it.first<<" "<<it.second<<"\n";
            if(it.second!=-1){
                if(ans.find(it.second)!=ans.end()){
                    if(it.first<ans[it.second]){
                        ans[it.second]=it.first;
                    }
                }
                else{
                    ans[it.second]=it.first;
                }
            }
        }
        long long val=INT_MAX;
        for(int i=1;i<=n;i++){
            if(ans.find(i)!=ans.end()){
                cout<<min(val,ans[i])<<" ";
                val=min(val,ans[i]);
            }
            else{
                if(val!=INT_MAX){
                    cout<<val<<" ";
                }
                else{
                    cout<<-1<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}