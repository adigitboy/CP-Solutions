#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){ 
        int n,k;
        cin>>n>>k;
        vector<int> v(n),temp;
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto it : mp){
            if(it.second>=k){
                temp.push_back(it.first);
            }
        }
    
        if(temp.size()>=1){
            long long cnt=0;
            long long diff=0;
            long long start=temp[0];
            long long end=temp[0];
            for(int i=1;i<temp.size();i++){
                
                if(temp[i]-1==temp[i-1]){
                    cnt++;
                    if(cnt>=diff){
                        end=temp[i];
                        diff=cnt;
                    }
                }
                else{
                    cnt=0;
                    start=temp[i];
                }
            }
            cout<<end-diff<<" "<<end<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
        
 
    }
    return 0;
}