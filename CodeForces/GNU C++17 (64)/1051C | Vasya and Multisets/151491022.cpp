#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    vector<long long> v(n);
    map<long long,long long> mp,mp1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    long long cnt=0;
    vector<pair<long long,long long>> vp;
    for(auto it : mp){
        if(it.second==1){
            cnt++;
        }
        vp.push_back({it.second,it.first});
    }
    sort(vp.begin(),vp.end(),greater<pair<long long,long long>>());
    bool flag = false;
    if(cnt%2==0){
        flag=true;
    }
    long long temp=0;
    // cout<<cnt<<" ";
    for(int i=0;i<vp.size();i++){
        if(!flag){
            if(vp[i].first>2){
                flag=true;
                mp1[vp[i].second]=1;
                temp++;
            }
        }
        else if(vp[i].first==1){
            mp1[vp[i].second]=1;
            cnt--;
            temp++;
        }
        // cout<<temp<<" "<<cnt<<"\n";
        if(temp==cnt){
            break;
        }
    
    }
    // cout<<mp1.size()<<" ";
    if(flag){
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            if(mp1[v[i]]==1){
                cout<<"B";
                mp1[v[i]]--;
            }
            else{
                cout<<"A";
            }
        }
    }
    else{
        cout<<"NO";
    }
    cout<<"\n";
    return 0;
}