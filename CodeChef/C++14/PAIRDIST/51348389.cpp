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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<vector<long long>> dir = {{-1,0},{1,0},{0,1},{0,-1}};
        if(n>4){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            int dx = dir[i][0];
            int dy = dir[i][1];
            cout<<v[i]*dx<<" "<<v[i]*dy<<"\n"; 
        }

    }
    return 0;
}