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
        vector<long long> a(n),b(n);
        vector<vector<long long>> v;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            v.push_back({a[i],b[i],i});
        }
        
        sort(v.begin(),v.end());
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool flag=true;
        
        for(int i=0;i<n;i++){
            if(v[i][0]!=a[i] || v[i][1]!=b[i]){
                flag=false;
                
            }
        }
        if(!flag){
            cout<<-1<<"\n";
        }
        else{
            vector<vector<long long>> temp=v;
            long long cnt=0;
            for(int i=0;i<n-1;i++){
                if(v[i][2]+1!=i+1){
                    cnt++;
                   
                    for(int j=i+1;j<n;j++){
                        if(v[j][2]==i){
                            v[j][2]=v[i][2];
                            break;
                        }
                    }
                }
            }
            v=temp;
            cout<<cnt<<"\n";
            for(int i=0;i<n-1;i++){
                if(v[i][2]+1!=i+1){
                    cout<<v[i][2]+1<<" "<<i+1<<"\n";
                    for(int j=i+1;j<n;j++){
                        if(v[j][2]==i){
                            v[j][2]=v[i][2];
                            break;
                        }
                    }
                }
            }
 
 
        }
 
    }
    return 0;
}