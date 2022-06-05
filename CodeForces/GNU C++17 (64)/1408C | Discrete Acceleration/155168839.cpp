#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
bool isPos(vector<long double> &v,long double mid,long double l){
    long double cnt=0;
    long double prv=0,speed=1;
    long double distf=0,distb=0;
    for(int i=0;i<v.size();i++){
        if(cnt + (v[i]-prv)/speed<mid){
            cnt = cnt + (v[i]-prv)/speed;
            speed++;
            prv=v[i];
            distf=v[i]; 
        }
        else{
            distf = distf + (speed*(mid-cnt));
            cnt=mid;
            break;
        }
    }
    if(cnt<mid){
        distf = distf + (speed*(mid-cnt));
    }
    cnt=0;prv=l;speed=1;
    for(int i=v.size()-1;i>=0;i--){
        if(cnt + abs(v[i]-prv)/speed<mid){
            cnt = cnt + abs(v[i]-prv)/speed;
            speed++;
            distb+=prv-v[i]; 
            
            prv=v[i];
        }
        else{
            distb = distb + (speed*(mid-cnt));
            cnt=mid;
            break;
        }
    }
    if(cnt<mid){
        distb = distb + (speed*(mid-cnt));
    }
    long double cordb = l-distb;
    long double corda = distf;
    
    if(corda>=cordb){
        return true;
    }
    return false;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long double n,l;
        cin>>n>>l;
        vector<long double> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long double low=0;
        long double high=l;
        long double ans=1e9;
        while(low<high){
            long double mid = (low+high)/2;
            // cout<<low<<" "<<high<<"\n";
            if(isPos(v,mid,l)){
                ans = mid;
                high = mid-0.00000001;
            } 
            else{
                low = mid+0.000000001;
            }
        }
        
        cout<<fixed<<setprecision(15)<<ans<<"\n";
    
    }
    
    
    return 0;
}