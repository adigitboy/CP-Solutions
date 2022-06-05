#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
// long long lenths(unsigned long long val){
//     long long cnt=0;
//     while(val>0){
//         val/=10;
//         cnt++;
//     }
//     return cnt;
// }
 
// long long helper(unsigned long long val,long long n){
//     if(lenths(val)>=n){
//         return 0;
//     }
//     vector<long long> v;
//     unsigned long long temp = val;
//     while(temp>0){
//         temp
//     } 
 
// }
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long n,x;
    cin>>n>>x;
    unsigned long long val = x;
    map<string,bool> vis;
    queue<pair<unsigned long long,long long>> q;
    q.push({val,0});
    string s = to_string(val);
    vis[s]=true;
    while(q.empty()==false){
        unsigned long long val = q.front().first; 
        long long dist = q.front().second;
        s = to_string(val);
        long long len = s.size();
 
        if(len==n){
          
            cout<<dist<<"\n";
            return 0;
        }
        q.pop(); 
        for(int i=0;i<s.size();i++){
            unsigned long long val1 = val*(s[i]-'0');
            string ss = to_string(val1);
            if(ss.size()<=n && vis[ss]==false){
                q.push({val1,dist+1});
                vis[ss]=true;
            }
        }
    }
    cout<<-1<<"\n";
    return 0;
}