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
        long long n,k;
        cin>>n>>k;
        vector<pair<long long,long long>> vp(n);
        map<long long,long long> cnt;
        map<long long,long long> cnt1;
        for(int i=0;i<n;i++){
            cin>>vp[i].first;
            vp[i].second=i;
            cnt1[vp[i].first]++;
            
        }
        long long val = 0;
        for(auto it : cnt1){
            val = val + min(it.second,k); 
        }
        long long maxC =  val/k;
        sort(vp.begin(),vp.end());
        long long j=0;
        vector<long long> ans(n);
        for(int i=0;i<n;i++){
            if(cnt[vp[i].first]!=k && maxC>0){
                ans[vp[i].second] = (j%k)+1;
                j++;
                if((j%k)==0){
                    maxC--;
                }
                cnt[vp[i].first]++;
            }
            else{
                ans[vp[i].second]=0;
            }
 
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}