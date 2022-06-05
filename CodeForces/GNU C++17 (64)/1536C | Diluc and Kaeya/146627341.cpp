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
        string s;
        cin>>s;
        map<pair<long double,long double>,long long> mp;
        vector<pair<long double,long double>> pre(n+1,{0,0});
        if(s[0]=='D'){
            pre[1].first=1;
        }
        else{
            pre[1].second=1;
        }
        vector<long long> ans(n+1,1);
        ans[0]=0;
        for(int i=2;i<=n;i++){
            if(s[i-1]=='D'){
                pre[i].first=pre[i-1].first+1;
                pre[i].second=pre[i-1].second;
            }
            else{
                pre[i].second=pre[i-1].second+1;
                pre[i].first=pre[i-1].first;
            }
            if(pre[i].first==i){
                ans[i]=i;
            }
            else if(pre[i].second==i){
                ans[i]=i;
            }
        }
        // for(int i=1;i<=n;i++){
        //     cout<<pre[i].first<<" "<<pre[i].second<<"\n";
        // }
        // cout<<"\n";
        for(int i=1;i<=n;i++){
            long double val1 = pre[i].first;
            long double val2 = pre[i].second;
            if(val1!=0 && val2!=0){
                ans[i] = max(ans[i],1+mp[{val1/val2,1}]);
                mp[{val1/val2,1}]++;
                // cout<<val1/val2<<"\n";
            } 
            else{
                ans[i] = max(ans[i],1+mp[{val1,val2}]);
                mp[{val1,val2}]++;
            }
            
        }
        
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}