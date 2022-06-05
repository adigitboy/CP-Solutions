#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n,k;
        cin>>n>>k;
        if(k>n-k){
            k = n-k;
        }
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long sum = accumulate(v.begin(),v.end(),(long long)0);
        sort(v.begin(),v.end());
        long long sumtillk = accumulate(v.begin(),v.begin()+k,(long long)0);
        long long sumtillkfromend =  accumulate(v.end()-k,v.end(),(long long)0);
        cout<<max(sum-2*sumtillk,sum-2*sumtillkfromend)<<"\n";
    }
    return 0;
}