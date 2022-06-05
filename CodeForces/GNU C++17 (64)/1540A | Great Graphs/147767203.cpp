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
        
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<0<<"\n";
 
        }
        else{
            long long ans = 0;
            sort(v.begin(),v.end());
            if(n>3){
                ans = ans - ( (n-3)*v[1] );
            }
            for(int i=2;i<n;i++){
                if(n-i>=3){
                    ans = ans - ((n-i-2)*v[i]);
                }
                ans = ans + (i-2+1)*v[i];
            }
            cout<<-ans<<"\n";
        }
    }
    return 0;
}