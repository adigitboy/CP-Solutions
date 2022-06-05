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
        vector<vector<long long>> v(n,vector<long long>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        long long ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long row=i,col=j;
                long long total=0;
                while(row>=0 && col>=0){
                    total+=v[row][col];
                    row--;
                    col--;
                }
                row=i,col=j;
               
                while(row<n && col>=0){
                    total+=v[row][col];
                    row++;
                    col--;
                }
                row=i,col=j;
                
                while(row>=0 && col<m){
                    total+=v[row][col];
                    row--;
                    col++;
                }
                row=i,col=j;
               
                while(row<n && col<m){
                    total+=v[row][col];
                    row++;
                    col++;
                }
                ans = max(ans,total-3*v[i][j]);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}