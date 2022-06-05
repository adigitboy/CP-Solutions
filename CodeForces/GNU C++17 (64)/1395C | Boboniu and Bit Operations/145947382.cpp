#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n,m;
    cin>>n>>m;
    vector<long long> a(n),b(m),ans(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<=1000;i++){
        long long ans = i;
        bool poss=true;
        for(int j=0;j<n;j++){
            bool flag = false;
            for(int k=0;k<m;k++){
                if(( (a[j]&b[k]) | ans)==ans){
                    
                    flag=true;
                    break;
                }
            }
            if(!flag){
                poss=false;
                break;
            }
        }
        if(poss){
            cout<<ans<<"\n";
            break;
        }
    }
    return 0;
}