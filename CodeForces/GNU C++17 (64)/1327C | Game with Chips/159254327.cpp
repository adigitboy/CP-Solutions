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
    long long n,m,k;
    cin>>n>>m>>k;
    vector<pair<long long,long long>> given(k+1,{0,0}),target(k+1,{0,0});
    for(int i=0;i<k;i++){
        cin>>given[i].first>>given[i].second;
    }
    for(int i=0;i<k;i++){
        cin>>target[i].first>>target[i].second;
    }
    cout<<n+m+n*m-3<<"\n";
    for(int i=0;i<n-1;i++){
        cout<<"U";
    }
    for(int j=0;j<m-1;j++){
        cout<<"L";
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            if(flag){
                cout<<"R";
            }
            else{
                cout<<"L";
            }
        }
        if(i!=n-1){
            cout<<"D";
        }
        if(flag){
            flag=false;
        }
        else{
            flag=true;
        }
    }
    cout<<"\n";
    return 0;
}