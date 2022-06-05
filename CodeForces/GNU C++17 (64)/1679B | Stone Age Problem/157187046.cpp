#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    long long n,q;
    cin>>n>>q;
    vector<long long> v(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    bitset<200005> bt;
    bt.set();
    
    for(int i=0;i<q;i++){
        long long t;
        cin>>t;
        long long prevval;
        if(t==1){
            long long idx,val;
            cin>>idx>>val;
            idx--;
            if(bt[idx]==1){
                sum = sum - v[idx]+val;
            }
            else{
                sum = sum - prevval+val;
            }
            v[idx]=val;
            bt[idx]=1;
            cout<<sum<<"\n";
        }
        else{
            long long val;
            cin>>val;
            prevval=val;
            sum = val*n;
            cout<<sum<<"\n";
            bt.reset();
        }
    }
    
    return 0;
}