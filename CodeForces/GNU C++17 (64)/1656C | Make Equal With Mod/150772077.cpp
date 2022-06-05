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
        bool flag1=false,flag=false;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1){
                flag1=true;
            }
            if(v[i]==0 || v[i]==2){
                flag=true;
            }
        }
        sort(v.begin(),v.end());
        if(flag1 && flag){
            cout<<"NO\n";
        }
        else if(flag1){
            bool flag3=true;
            for(int i=0;i<n-1;i++){
                if(v[i]+1==v[i+1]){
                    cout<<"NO\n";
                    flag3=false;
                    break;
                }
            }
            if(flag3){
                cout<<"YES\n";
            }
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}