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
        long long neg=0,op=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<0){
                neg++;
            }
        }
        for(int i=0;i<n;i++){
            if(neg>0){
                if(v[i]>0){
                    v[i]=-v[i];
                }
                neg--;
            }
            else{
                v[i]=abs(v[i]);
            }
        }
        bool flag=true;
        for(int i=0;i<n-1;i++){
           
            if(v[i]>v[i+1]){
                flag=false;
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