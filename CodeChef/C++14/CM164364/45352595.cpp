#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        int n,k;
        cin>>n>>k;
        int ele;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>ele;
            mp[ele]++;
        }
        if((n-k)>=mp.size()){
            cout<<mp.size()<<"\n";
            continue;
        }
        cout<<(n-k)<<"\n";
    }
    return 0;
}