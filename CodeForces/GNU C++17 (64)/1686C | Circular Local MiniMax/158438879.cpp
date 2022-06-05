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
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n%2!=0){
            cout<<"NO\n";
        }
        else{
            sort(v.begin(),v.end());
            long long val = n/2;
            vector<long long> small,gre,ans;
            for(int i=0;i<val;i++){
                small.push_back(v[i]);
            }
            for(int i=val;i<n;i++){
                gre.push_back(v[i]);
            }
            long long idx=0;
            for(int i=0;i<val;i++){
                ans.push_back(small[idx]);
                ans.push_back(gre[idx]);
                idx++;
            }
            
            bool flag=true;
            if(ans[0]>=ans[n-1])
            {
                flag=false;
            }
            if(ans[n-1]<=ans[n-2])
            {
                flag=false;
            }
            for(int i=1;i<n-1;i+=2){
                if(ans[i]<=ans[i-1] || ans[i]<=ans[i+1]){
                    flag=false;
                }
            }
            if(flag){
                cout<<"YES\n";
                for(int i=0;i<n;i++)
                {
                    cout<<ans[i]<<" ";
                }
                cout<<"\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}