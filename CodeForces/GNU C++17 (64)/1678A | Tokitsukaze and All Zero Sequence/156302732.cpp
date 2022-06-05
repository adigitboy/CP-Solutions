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
        map<long long,long long> mp;
        bool flag=false;
        bool flag1=false;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
            if(mp[v[i]]>=2){
                flag=true;
            }
            if(v[i]==0){
                flag1=true;
            }
        }
        if(flag1){
            cout<<n-mp[0]<<"\n";
        }
        else if(flag){
            cout<<n<<"\n";
        }
        else{
            cout<<n+1<<"\n";
        }
 
    }
    return 0;
}