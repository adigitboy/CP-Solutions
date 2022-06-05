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
        vector<vector<char>> v(n,vector<char>(m,'.'));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        for(int j=0;j<m;j++){
            long long lastu = n-1;
            for(int i=n-1;i>=0;i--){
                if(v[i][j]=='o'){
                    lastu=i-1;
                }
                else if(v[i][j]=='*'){
                    v[i][j]='.';
                    v[lastu][j]='*';
                    lastu=lastu-1;
                }
 
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<v[i][j];
            }
            cout<<"\n";
        }
       
    }
    return 0;
}