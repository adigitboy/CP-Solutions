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
    
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(v[i]>i+1){
            flag=false;
            break;
        }
    }
    if(flag){
        set<long long> st;
        for(int i=0;i<=2*n;i++){
            st.insert(i);
        }
        for(int i=0;i<n;i++){
            if(st.find(v[i])!=st.end()){
                st.erase(st.find(v[i]));
            }
        }
        for(int i=0;i<n;i++){
            if(i){
                if(v[i]!=v[i-1]){
                    st.insert(v[i-1]);
                }
                cout<<*st.begin()<<" ";
                st.erase(st.begin());
            }
            else{
                cout<<*st.begin()<<" ";
                
                st.erase(st.begin());
            }
            
        }
        cout<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
    
    return 0;
}