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
        set<long long> st;
        for(int i=1;i*i<=n;i++){
            if(st.find(n/i)==st.end()){
                st.insert(n/i);
                st.insert(i);
            }
            
        }
        cout<<st.size()+1<<"\n";
        cout<<"0 ";
        for(auto it : st){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    return 0;
}