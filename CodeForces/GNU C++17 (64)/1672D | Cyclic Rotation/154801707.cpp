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
        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        if(a==b){
            cout<<"YES\n";
        }
        else if(a[n-1]!=b[n-1]){
            cout<<"NO\n";
        }
        else{
            multiset<long long> st;
            long long idx=0;
            for(int i=0;i<n;i++){
                if(a[i]==b[idx]){
                    idx++;
                }
                else if(i>0 && a[i-1]==b[idx] && st.find(a[i-1])!=st.end()){
                    idx++;
                    st.erase(st.find(a[i-1]));
                    i--;
                }
                else{
                    st.insert(a[i]);
                }
            }
            while(idx<n && a[n-1]==b[idx] && st.find(a[n-1])!=st.end()){
                st.erase(st.find(a[n-1]));
                idx++;
            }
            if(idx==n){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}