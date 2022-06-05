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
        long long n,x;
        cin>>n>>x;
        vector<long long> v(n);
        bool flag = true;
        long long ans = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long cnt=0;
        long long lastu=x;
        for(int i=0;i<n-1;i++){
            if(v[i]<=v[i+1]){
                if(v[i]>x){
                    cnt++;
                    x=v[i];
                }
            }
            else{
                if(x>v[i+1]){
                    flag=false;
                    break;
                }
                ans=ans+cnt+1;
                cnt=0;
                x=v[i];
            }
        }
        if(flag){
            cout<<ans<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}