#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    long long cnt=0;
    for(int i=0;i<(1<<n);i++){
        vector<long long> pick;
 
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                pick.push_back(v[j]);
            }
        }
        long long sz = pick.size();
        long long sum=accumulate(pick.begin(),pick.end(),(long long)0);
 
        if(sz>0 && pick[sz-1] - pick[0]>=x && sum>=l && sum<=r){
            cnt++;
        }
 
    }
    cout<<cnt<<"\n";
 
    return 0;
}