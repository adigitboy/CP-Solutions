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
        long long idx=-1;
        for(int i=0;i<n;i++){
            if(v[i]!=i+1){
                idx=i+1;
                break;
            }
        }
        if(idx==-1){
            for(auto it : v){
                cout<<it<<" ";
            }
            cout<<"\n";
        }
        else{
            long long ridx;
            for(int j=idx;j<n;j++){
                if(v[j]==idx){
                    ridx=j+1;
                    break;
                }
            }
            // cout<<idx<<" "<<ridx<<"\n";
            reverse(v.begin()+idx-1,v.begin()+ridx);
            for(auto it : v){
                cout<<it<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}