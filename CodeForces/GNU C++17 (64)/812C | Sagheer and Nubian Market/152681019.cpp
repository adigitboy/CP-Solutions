#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
long long tv = 0;
 
bool isPos(vector<long long> &v,long long mid,long long total){
    long long cost=0;
    priority_queue<long long> pq;
    for(int i=0;i<v.size();i++){
        long long val = v[i]+(i+1)*mid;
        if(pq.size()<mid){
            
            pq.push(val);
        }
        else if(pq.size()>0 && pq.top()>val){
            pq.pop();
            pq.push(val);
        }
    }
    while(pq.empty()==false){
        cost = cost + pq.top();
        // cout<<pq.top()<<" ";
        pq.pop();
    }
    // cout<<"\n";
    if(cost<=total){
        tv = cost;
    }
    
    return cost<=total;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,total;
    cin>>n>>total;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long lo = 0;
    long long hi = n;
  
    
    long long ans;
    while(lo<=hi){
        long long mid = lo + (hi-lo)/2;
        if(isPos(v,mid,total)){
            ans = mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    cout<<ans<<" "<<tv<<"\n";
    return 0;
}