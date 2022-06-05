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
        string s;
        cin>>s;
        long long n = s.size();
        vector<long long> pre(n+1);
        vector<long long> suf(n+1);
        long long cnt=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                pre[i]=1;
                suf[i]=1;
                cnt++;
            }
        }
        for(int i=1;i<n;i++){
            pre[i]+=pre[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suf[i]+=suf[i+1];
        }
        if(cnt==0 || cnt==n){
            cout<<0<<"\n";
            continue;
        }
        long long ans = INT_MAX;
        // for(int i=0;i<n;i++){
        //     cout<<pre[i]<<" ";
        // }
        // cout<<"\n";
        // for(int i=0;i<n;i++){
        //     cout<<suf[i]<<" ";
        // }
        // cout<<"\n";
        for(int i=0;i<=cnt;i++){
            long long x=INT_MAX;
            if(i==0){
                x = cnt - suf[n-cnt];
            }
            else if(i==cnt){
                x = cnt - pre[i-1];
            }
            else{
                x = cnt - (pre[i-1] + suf[n-(cnt-i)]);
            }
            
            ans = min(ans,x);
        }
        cout<<ans<<"\n";
 
    }
    return 0;
}