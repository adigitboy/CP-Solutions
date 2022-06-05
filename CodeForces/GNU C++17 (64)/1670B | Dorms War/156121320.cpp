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
        long long k;
        cin>>k;
        map<char,long long> mp;
 
        for(int i=0;i<k;i++){
            char c;
            cin>>c;
            mp[c]++;
        }
        bool flag=true;
        bool flag1=true;
        for(int i=0;i<n;i++){
            if(mp[s[i]]==0){
                flag=false;
            }
            if(mp[s[i]]>=1){
                flag1=false;
            }
        }
        if(flag){
            cout<<1<<"\n";
        }
        else if(flag1){
            cout<<0<<"\n";
        }
        else{
            long long prev=0;
            long long ans = 0;
          
            for(int i=0;i<n;i++){
                if(mp[s[i]]>=1){
                    ans = max(ans,i-prev+1);
                    prev=i;
                }
            }
            
            cout<<ans-1<<"\n";
        }
    }
    return 0;
}