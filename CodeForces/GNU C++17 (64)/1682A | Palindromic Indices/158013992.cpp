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
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2==0){
            long long cnt=2;
            char c = s[n/2-1];
            long long l=n/2-2;
            long long r=n/2+1;
            while(l>=0 && s[l]==c){
                l--;
                cnt++;
            }
            while(r<n && s[r]==c){
                r++;
                cnt++;
            }
            cout<<cnt<<"\n";
        }
        else{
            long long cnt=1;
            char c = s[n/2];
            long long l=n/2-1;
            long long r=n/2+1;
            while(l>=0 && s[l]==c){
                l--;
                cnt++;
            }
            while(r<n && s[r]==c){
                r++;
                cnt++;
            }
            cout<<cnt<<"\n";
        }
    }
    return 0;
}