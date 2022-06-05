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
        long long a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        bool flag=true;
        if(a<x){
            if(a+c<x){
                flag=false;
            }
            else if(a+c>=x){
                c=c-(x-a);
            }
        }
        if(b<y){
            if(b+c<y){
                flag=false;
            }
            else if(b+c>=y){
                c=c-(y-b);
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}