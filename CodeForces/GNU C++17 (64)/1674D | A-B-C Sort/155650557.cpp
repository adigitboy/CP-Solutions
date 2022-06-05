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
        vector<long long> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long len = n;
        bool flag=true;
        long long largest=INT_MIN;
        vector<long long> ans;
        for(int i=0;i<n;i++){
            if(len%2==0){
                if(v[i]>v[i+1]){
                    ans.push_back(v[i+1]);
                    swap(v[i],v[i+1]);
                }
                else{
                    ans.push_back(v[i]);
                }
            }
            else{
                ans.push_back(v[i]);
            }
            len--;
        }
        for(int i=0;i<ans.size()-1;i++){
           
            if(ans[i+1]<ans[i]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}