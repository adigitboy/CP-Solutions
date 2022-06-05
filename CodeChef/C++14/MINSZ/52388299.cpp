#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>


using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


long long calcPower(long long x,long long y){
    if(y==0){
        return 1;
    }
    long long ans = calcPower(x,y/2);
    if(y%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*x;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> powers(61,0);
    for(long long i=1;i<=60;i++){
        powers[i] = calcPower(2,i)-1;
    }
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        cin>>n;
        if(n==0){
            cout<<2<<"\n";
            cout<<"1 1"<<"\n";
            continue;
        }
        long long count=1;
        auto it = find(powers.begin(),powers.end(),n);
        if(it!=powers.end()){
            cout<<1<<"\n";
            cout<<*it<<"\n";
            continue;
        }
        vector<long long> ans;
        while(n>0){
            if((n&1)==0){
                ans.push_back(powers[count]);
                if(powers[count-1]!=0){

                    ans.push_back(powers[count-1]);
                }
            }
            if(n==1){
                ans.push_back(powers[count]);
            }
            n>>=1;
            count++;
        }
        // cout<<ans.size()<<"\n";
        map<long long,long long> mp;
        for(auto it : ans){
            mp[it]++;
        }
        
        vector<long long> val;
        for(auto it : mp){
            if(it.second%2!=0){
                val.push_back(it.first);
            }
        }
        cout<<val.size()<<"\n";
        for(auto it : val){
            cout<<it<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}