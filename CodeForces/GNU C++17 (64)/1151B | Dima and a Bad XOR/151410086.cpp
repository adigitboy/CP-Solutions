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
    vector<vector<long long>> v(n,vector<long long>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    long long ans=-1;
    for(int i=0;i<n;i++){
        set<long long> st;
        for(int j=0;j<m;j++){
            st.insert(v[i][j]);
        }
        if(st.size()>1){
            ans=i;
            break;
        }
    }
    if(ans==-1){
        long long val = 0;
        for(int i=0;i<n;i++){
            val = val ^ v[i][0];
        }
        if(val>0){
            cout<<"TAK\n";
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"NIE\n";
        }
    }
    else{
        cout<<"TAK\n";
        long long val = 0;
        for(int i=0;i<n;i++){
            if(i!=ans){
                val = val ^ v[i][0];
            }
        }
        // cout<<val<<" ";
        long long idx;
        for(int j=0;j<m;j++){
            if( (v[ans][j] ^ val) > 0){
                idx=j;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=ans){
                cout<<1<<" ";
            }
            else{
                cout<<idx+1<<" ";
            }
        }
    }
    return 0;
}