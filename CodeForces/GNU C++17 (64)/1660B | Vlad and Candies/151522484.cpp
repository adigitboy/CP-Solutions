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
            if(v[0]>1){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else{
            sort(v.begin(),v.end());
            long long l = v[n-1];
            long long sl = v[n-2];
            if(l-sl>=2){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
 
    }
    return 0;
}