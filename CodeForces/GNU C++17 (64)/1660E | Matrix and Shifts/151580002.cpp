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
        long long n;
        cin>>n;
        // cout<<n<<"\n";
        vector<string> v(n);
        long long zo = 0,ones=0;
        vector<vector<long long>> grid(n,vector<long long>(n,0));
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[0][i]=='1'){
                grid[0][i]=1;
                ones++;
                
            }
            else{
                zo++;
            }
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]=='0'){
                    zo++;
                }
                if(v[i][j]=='1'){
                    ones++;
                }
                if(j==0){
                    if(v[i][j]=='1'){
                        grid[i][j]=1+grid[i-1][n-1];
                    }
                    else{
                        grid[i][j] = grid[i-1][n-1];
                    }
                }
                else{
                    if(v[i][j]=='1'){
                        grid[i][j]=1+grid[i-1][j-1];
                    }
                    else{
                        grid[i][j] = grid[i-1][j-1];
                    }
                }
            }
        }
        long long maxi = 0;
        for(int j=0;j<n;j++){
            maxi = max(maxi,grid[n-1][j]);
        }
        // cout<<maxi<<" ";
        // cout<<zo<<" ";
        long long ans = n*n-maxi-zo+(n-maxi);
        cout<<ans<<"\n";
        
    }
    return 0;
}