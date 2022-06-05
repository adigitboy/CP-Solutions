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
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long k;
        cin>>k;
        vector<long long> b(k);
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end(),greater<long long>());
        sort(b.begin(),b.end(),greater<long long>());
        if(a[0]>b[0]){
            cout<<"Alice\n";
            cout<<"Alice\n";
        }
        else if(b[0]>a[0]){
            cout<<"Bob\n";
            cout<<"Bob\n";
        }
        else{
            cout<<"Alice\n";
            cout<<"Bob\n";
        }
    }
    return 0;
}