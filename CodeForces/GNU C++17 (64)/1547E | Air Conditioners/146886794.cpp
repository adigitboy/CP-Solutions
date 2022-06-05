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
        vector<long long> pos(k),val(k);
        vector<pair<long long,long long>> vp;
        for(int i=0;i<k;i++){
            cin>>pos[i];
            pos[i]--;
        }
        for(int i=0;i<k;i++){
            cin>>val[i];
        }
        for(int i=0;i<k;i++){
            vp.push_back({pos[i],val[i]});
        }
        sort(vp.begin(),vp.end());
        vector<long long> pre(n+1,INT_MAX),suf(n+1,INT_MAX);
        int j=0;
        if(vp[0].first==0){
            pre[0]=vp[0].second;
            j++;
        }
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+1;
            if(j<k && vp[j].first==i){
                pre[i]=min(vp[j].second,pre[i]);
                j++;
            }
        }
        j=k-1;
        if(vp[j].first==n-1){
            suf[n-1]=vp[j].second;
            j--;
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+1;
            if(j>=0 && vp[j].first==i){
                suf[i]=min(vp[j].second,suf[i]);
                j--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<min(pre[i],suf[i])<<" ";
        }
        cout<<"\n";
    }
    return 0;
}