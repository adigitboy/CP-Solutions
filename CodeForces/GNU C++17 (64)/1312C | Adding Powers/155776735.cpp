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
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag=true;
        unordered_map<long long,long long> mp;
        for(int i=0;i<n;i++){
            long long val = v[i];
            long long cnt=0;
            while(val>0){
                if(val%k==0 || val%k==1){
                    if(val%k==1){
                        mp[cnt]++;
                    }
                    val/=k;
                    cnt++;
                }
                else{
                    flag=false;
                    break;
                }
            }
        }
        for(auto it : mp){
            if(it.second>1){
                flag=false;
                break;
            }
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