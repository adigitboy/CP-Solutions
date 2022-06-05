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
        long long maxo=-1,maxe=-1;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                if(v[i]>=maxe){
                    maxe=v[i];
                }
                else{
                    flag=false;
                    break;
                }
            }
            else{
                if(v[i]>=maxo){
                    maxo=v[i];
                }
                else{
                    flag=false;
                    break;
                }
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