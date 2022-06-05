#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        cin>>n;
        vector<long long> v(n);
        long long flag=0;
        
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]&1){
                flag=1;
            }
        }
        if(flag){
            cout<<0<<"\n";
            continue;
        }
        long long mini=INT_MAX;
        for(auto it : v){
            long long ct=0;
            for(long long j=0;j<33;j++){
                if(it&(1<<j)){
                    mini = min(mini,j);
                    break;
                }
            }
        }
        cout<<mini<<"\n";

    }
    return 0;
}