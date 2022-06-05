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
        long long n,m;
        cin>>n>>m;
        vector<vector<char>> v(n+1,vector<char>(m+1,'.'));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]=='0'){
                    long long cnt=0;
                    if(i+1<n){
                        if(v[i+1][j]=='1'){
                            cnt++;
                        }
                    }
                    if(j+1<m){
                        if(v[i][j+1]=='1'){
                            cnt++;
                        }
                    }
                    if(i+1<n && j+1<m){
                        if(v[i+1][j+1]=='1'){
                            cnt++;
                        }
                    }
                    if(cnt==3){
                        flag=true;
                    }
                    cnt=0;
                    if(i-1>=0){
                        if(v[i-1][j]=='1'){
                            cnt++;
                        }
                    }
                    if(j+1<m){
                        if(v[i][j+1]=='1'){
                            cnt++;
                        }
                    }
                    if(i-1>=0 && j+1<m){
                        if(v[i-1][j+1]=='1'){
                            cnt++;
                        }
                    }
                    if(cnt==3){
                        flag=true;
                    }
                    cnt=0;
                    if(i+1<n){
                        if(v[i+1][j]=='1'){
                            cnt++;
                        }
                    }
                    if(j-1>=0){
                        if(v[i][j-1]=='1'){
                            cnt++;
                        }
                    }
                    if(i+1<n && j-1>=0){
                        if(v[i+1][j-1]=='1'){
                            cnt++;
                        }
                    }
                    if(cnt==3){
                        flag=true;
                    }
                    cnt=0;
                    if(i-1>=0){
                        if(v[i-1][j]=='1'){
                            cnt++;
                        }
                    }
                    if(j-1>=0){
                        if(v[i][j-1]=='1'){
                            cnt++;
                        }
                    }
                    if(i-1>=0 && j-1>=0){
                        if(v[i-1][j-1]=='1'){
                            cnt++;
                        }
                    }
                    if(cnt==3){
                        flag=true;
                    }
 
                }
            }
        }
        if(flag){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}