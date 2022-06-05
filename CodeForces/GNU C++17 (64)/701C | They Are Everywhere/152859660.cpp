#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
bool isPos(long long mid,string &s,long long sz){
    map<char,long long> mp;
    long long val = 0;
    for(int i=0;i<mid;i++){
        mp[s[i]]++;
    }
    val = mp.size();
    for(int i=mid;i<s.size();i++){
        mp[s[i-mid]]--;
        if(mp[s[i-mid]]==0){
            mp.erase(s[i-mid]);
        }
        mp[s[i]]++;
        val = max(val,(long long)mp.size());
    }
    return val==sz;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    long long sz = st.size();
    
    long long low = 1,high = s.size(),ans;
    while(low<=high){
        long long mid = low + (high-low)/2;
        
        // cout<<mid<<"\n";
        if(isPos(mid,s,sz)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}