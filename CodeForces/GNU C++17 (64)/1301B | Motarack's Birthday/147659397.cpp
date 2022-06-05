#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
long long maxDiff(vector<long long> &v,long long x){
    vector<long long> temp = v;
    for(int i=0;i<v.size();i++){
        if(temp[i]==-1){
            temp[i]=x;
        }
    }
    long long diff=0;
    for(int i=1;i<v.size();i++){
        diff = max(diff,abs(temp[i]-temp[i-1]));
    }
    return diff;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==2){
            if(v[0]>=0){
                cout<<0<<" "<<v[0]<<"\n";
            }
            else if(v[1]>=0){
                cout<<0<<" "<<v[1]<<"\n";
            }
            else{
                cout<<0<<" "<<0<<"\n";
            }
            continue;
        }
        long long maxi = INT_MIN,mini = INT_MAX;
        vector<long long> ans;
        
        for(int i=1;i<n-1;i++){
            if(v[i]==-1){
                if(v[i-1]>=0){
                    maxi = max(maxi,v[i-1]);
                    mini = min(mini,v[i-1]);
                    ans.push_back(v[i-1]);
                }
                if(v[i+1]>=0){
                    maxi = max(maxi,v[i+1]);
                    mini = min(mini,v[i+1]);
                    ans.push_back(v[i+1]);
                }
            }
            if(v[i-1]==-1 && v[i]!=-1){
                maxi = max(maxi,v[i]);
                mini = min(mini,v[i]);
                ans.push_back(v[i]);
            }
            if(v[i+1]==-1 && v[i]!=-1){
                maxi = max(maxi,v[i]);
                mini = min(mini,v[i]);
                ans.push_back(v[i]);
            }
        }
        if(maxi==INT_MIN){
            cout<<0<<" "<<0<<"\n";
        }
        // else{
        //     for(auto it : ans){
        //         cout<<it<<" ";
        //     }
        //     cout<<"\n";
        // }
        else{
            long long low = mini;
            long long high = maxi;
            long long val = INT_MAX;
            long long k;
            while(low<=high){
                long long mid = low + (high-low)/2;
                if(maxDiff(v,mid)<val){
                    val = maxDiff(v,mid);
                    k=mid;
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            cout<<val<<" "<<k<<"\n";
        }
    }
    return 0;
}