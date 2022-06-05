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
        long long n,a,b,fidx=-1,lidx=-1;
        cin>>n>>a>>b;
        string s;
        cin>>s; 
        vector<long long> group;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                fidx=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                lidx=i;
                break;
            }
        }
        long long cnt=0;
        
        for(int i=fidx+1;i<=lidx;i++){
            if(s[i]=='1'){
                group.push_back(cnt);
                cnt=0;
            }
            else{
                cnt++;
            }
        }
        long long ans = 0;
        if(fidx==-1){
            ans = ans + n*(a+b)+b;
            cout<<ans<<"\n";
        }
        else{
            long long cnte=0;
            for(auto it : group){
                if(it==1){
                    ans = ans + a;
                }
                else if(it!=0){
                    cnte++;
                    ans = ans + min((it-1)*2*b+it*a,(it-1)*b+(it+2)*a);
                }
            }
            long long cnt=fidx+n-lidx-1;
            
            // cout<<ans<<" ";
            
            vector<long long> ones;
            long long oc=0;
            for(int i=fidx;i<=lidx+1;i++){
                if(s[i]=='0'){
                    ones.push_back(oc);
                    oc=0;
                }
                else{
                    oc++;
                }
            }
            // cout<<ans<<" ";
            for(auto it : ones){
                if(it>0){
                    ans = ans + (it+1)*2*b+it*a;
                }
            }
            ans = ans + (cnt+2)*a + cnt*b;
            cout<<ans<<"\n";            
        }
        
       
    }
    return 0;
}