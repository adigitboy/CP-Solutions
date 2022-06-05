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
        long long n,b,x,y;
        cin>>n>>b>>x>>y;
        long long sum = 0,val=0;
        for(int i=0;i<n;i++){
            if(val+x<=b){
                val+=x;
            }
            else{
                val-=y;
            }
            sum+=val;
        }
        cout<<sum<<"\n";
    }
    return 0;
}