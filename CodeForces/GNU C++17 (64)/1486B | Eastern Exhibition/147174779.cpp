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
        multiset<long long> x,y;
        for(int i=0;i<n;i++){
            long long u,v;
            cin>>u>>v;
            x.insert(u);
            y.insert(v);
        }
        pair<long long,long long> p1,p2;
        if(x.size()%2==0){
            long long sz = x.size();
            long long cnt=1;
            
            for(auto it : x){
                if(cnt==sz/2){
                    p1.first=it;
                }
                if(cnt==sz/2+1){
                    p1.second=it;
                    break;
                }
                cnt++;
            }
        }
        else{
            long long sz = x.size();
            long long cnt=1;
            for(auto it : x){
                if(cnt==(sz+1)/2){
                    p1.first=it;
                    p1.second=it;
                }
                cnt++;
            }
        }
        if(y.size()%2==0){
            long long sz = y.size();
            long long cnt=1;
            
            for(auto it : y){
                if(cnt==sz/2){
                    p2.first=it;
                }
                if(cnt==sz/2+1){
                    p2.second=it;
                    break;
                }
                cnt++;
            }
        }
        else{
            long long sz = y.size();
            long long cnt=1;
            for(auto it : y){
                if(cnt==(sz+1)/2){
                    p2.first=it;
                    p2.second=it;
                }
                cnt++;
            }
        }
        long long ans = (p1.second-p1.first+1)*(p2.second-p2.first+1);
        cout<<ans<<"\n";
    }
    return 0;
}