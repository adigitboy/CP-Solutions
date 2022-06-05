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
        long long cnt=0;
        vector<long long> v(n);
       
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i>0 && v[i]==0){
                flag=false;
            }
        }
        for(int i=n-2;i>=0;i--){
            while(v[i]>=v[i+1]){
                v[i]/=2;
                cnt++;
                if(v[i]==0){
                    if(i==0){
                        break;
                    }
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<cnt<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}