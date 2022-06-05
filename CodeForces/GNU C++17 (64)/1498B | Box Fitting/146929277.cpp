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
        long long n,w;
        cin>>n>>w;
        multiset<long long> mst;
        for(int i=0;i<n;i++){
            long long u;
            cin>>u;
            mst.insert(u);
        }
        long long h = 1,left = w;
        while(!mst.empty()){
            auto it = mst.upper_bound(left);
            if(it==mst.begin()){
                left=w;
                h++;
            }
            else{
                it--;
                left-=*it;
                mst.erase(it);
            }
        }
        cout<<h<<"\n";
    }
    return 0;
}