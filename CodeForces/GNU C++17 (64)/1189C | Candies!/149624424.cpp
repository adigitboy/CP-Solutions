#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
    cin>>n;
    vector<long long> v(n),pre(n+1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+v[i];
    }
    long long q;
    cin>>q;
    for(int i=0;i<q;i++){
        long long l,r,ans;
        cin>>l>>r;
        
        if(l==1){
            ans = (pre[r-1])/10;
        }
        else{
            ans = (pre[r-1]-pre[l-2])/10;
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}