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
        vector<long long> v(n);
        map<long long,long long> mp;
        long long cnto=0,cnte=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i>0 && i<n-1){
                if(v[i]%2!=0){
                    cnto++;
                }
                else{
                    cnte++;
                }
                sum+=v[i];
                mp[v[i]]++;
            }
            
        }
        if(n==3){
            if(v[1]%2!=0){
                cout<<-1<<"\n";
                
            }
            else{
                cout<<v[1]/2<<"\n";
            }
            continue;
        }
        if(mp[1]==n-2){
            cout<<-1<<"\n";
        }
        else{
            long long ans = (sum+cnto)/2;
            cout<<ans<<"\n";
        }
        
    }
    return 0;
}