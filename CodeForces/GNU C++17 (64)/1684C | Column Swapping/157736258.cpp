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
        long long n,m;
        cin>>n>>m;
        vector<vector<long long>> v(n,vector<long long>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        long long col=-5;
        for(int j=1;j<m;j++){
            for(int i=0;i<n;i++){
                if(v[i][j]<v[i][j-1]){
                    col=j;
                }
                else if(col==j-1 && v[i][j]==v[i][j-1]){
                    col=j;
                }
            }
        }
        if(col==-5){
            cout<<"1 1\n";
        }
        else{
           
            long long swapcol=col;
            for(int j=0;j<m;j++){
                bool flag=false;
                for(int i=0;i<n;i++){
                    if(v[i][col]<v[i][j]){
                        flag=true;
                    }
                }
                if(flag){
                    swapcol=j;
                    break;
                }
            }
           
            for(int i=0;i<n;i++){
                swap(v[i][col],v[i][swapcol]);
            }
            bool flag=true;
            for(int j=1;j<m;j++){
                for(int i=0;i<n;i++){
                    if(v[i][j]<v[i][j-1]){
                        flag=false;
                    }
                }
            }
            if(flag){
                cout<<swapcol+1<<" "<<col+1<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }
 
    }
    return 0;
}