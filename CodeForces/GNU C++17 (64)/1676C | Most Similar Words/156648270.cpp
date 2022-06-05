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
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long mini = INT_MAX;
        for(int i=0;i<n-1;i++){
            
            for(int j=i+1;j<n;j++){
                long long ans=0;
                string s1=v[i];
                string s2=v[j];
                for(int l=0;l<k;l++){
                    ans = ans + abs(s1[l]-s2[l]);
                }
                mini = min(mini,ans);
            }
            
        }
        cout<<mini<<"\n";
    }
    return 0;
}