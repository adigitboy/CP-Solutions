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
        long long cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0 && v[i][j]=='1'){
                    flag=true;
                }
                if(v[i][j]=='1'){
                    cnt++;
                }
            }
        }
        if(flag){
            cout<<-1<<"\n";
            continue;
        }
        cout<<cnt<<"\n";
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(v[i][j]=='1'){
                    if(i>=1){
                        cout<<i-1+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<"\n";
                    }
                    else if(j>0){
                        // ans[i*j+1] = {i,j-1,i,j};
                        cout<<i+1<<" "<<j-1+1<<" "<<i+1<<" "<<j+1<<"\n";
                    }
                }
            }
        }
        
    }
    return 0;
}